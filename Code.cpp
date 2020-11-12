#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*1ll * (b)) / gcd(a, b)
#define pb push_back
#define fi first
#define se second
#define vi std::vector<int> 
#define vvi std::vector<vi> 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main() {
	fast;
	ll n,m;
	cin>> n>>m;
	ll i,j,a[n],mx=0,mn=LLONG_MAX;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    mx=max(mx,a[i]);
	    mn=min(mn,a[i]);
	}
	ll l=mn, r=mx,mid;
	ll ans=LLONG_MIN,tc=n;
	while(l<=r)
	{
	    mid=(r-l)/2 +l;
	    ll sum=0,c=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>mid)
	        {
	            sum+=a[i]-mid;c++;
	        }
	    }
	    if(sum>=m)
	    {
	            ans=max(ans,mid);
	    }
	     
	    if(sum==m)break;
	    if(sum>m)
	    {
	        l=mid+1;
	    }
	    else
	     r=mid-1;
	}
	cout<< ans ;
	return 0;
}
