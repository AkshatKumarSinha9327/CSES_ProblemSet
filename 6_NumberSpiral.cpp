#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		ll i, j;
		cin >> i >> j;
		if(i==j)
		{
			if(i&1)
			{
				cout<<i*i - abs(1-j);
			}
			else {
				cout<<(i-1)*(i-1) + 1 + abs(1-j);
			}
		}
		else if(i>j)
		{
			if(i&1)
			{
				cout<<(i-1)*(i-1) + 1 + abs(1-j);
			}
			else {
				cout<<i*i - abs(1-j);
				// cout<<i << j<<endl;
			}
		}
		else if(i<j)
		{
			if(j&1)
			{
				cout<<j*j - abs(1-i);
			}
			else {
				cout<<(j-1)*(j-1) +1 + abs(1-i);
			}
		}
		cout<<endl;	
	}
}