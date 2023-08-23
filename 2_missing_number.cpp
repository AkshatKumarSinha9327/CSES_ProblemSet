#include<bits/stdc++.h>

using namespace std;
 
typedef long long ll;

const int N= 1e7+10;
int arr[N];
int main()
{
	ll n;
	cin>>n;
	// 1st approach
	// for(ll i=1;i<n;i++)
	// {
	// 	ll a;
	// 	cin>>a;
	// 	arr[a]=1;
	// }
	// for(ll i=1;i<=n;i++)
	// {
	// 	if (arr[i]==0)
	// 	{
	// 		cout<<i;
	// 		break;
	// 	}
	// }
	// 2nd approach
	// ll sum = (n*(n+1))/2;
	// vector<int> v(n);
	// ll vsum = 0;
	// for(int i = 0 ; i < n-1 ;i++)
	// {
	// 	cin >> v[i];
	// 	vsum+=v[i];
	// }
	// cout<<sum-vsum<<endl;
	// 3rd approach 
	int x = 0;
	vector<int> v(n);
	for(int i =1 ; i <= n ;i++)
	{
		x^=i;
	}
	int y = 0;
	for(int i = 0 ; i < n-1 ;i++)
	{
		int a;
		cin >> a;
		y^=a;
	}
	x ^=y;
	cout<<x;
}