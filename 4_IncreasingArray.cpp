#include<bits/stdc++.h>

using namespace std;
typedef long long  ll;
int main()
{
	ll n;
	cin >> n;
	vector<ll> v(n);
	for(ll i = 0 ; i < n ;i++)
	{
		cin >> v[i];
	}
	ll sm =0 ;
	for(ll i = 1 ; i < n ;i++)
	{
		if(v[i]<v[i-1])
		{
			sm = sm + abs(v[i]-v[i-1]);
			// cout<<v[i]<<" " <<abs(v[i]-v[i-1])<< " ";
			v[i]=v[i-1];
			// cout<<v[i]<<endl;
		}
	}
	// cout<<endl;
	// if(8999999991>=410065399)cout<<"HII";
	cout<<sm;
}