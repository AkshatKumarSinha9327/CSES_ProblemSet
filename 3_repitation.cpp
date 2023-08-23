#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
	
		string s;
		cin>>s;
		int mx=1,cnt=1;
		for(int i = 0 ; i < s.size()-1;i++)
		{
			
			if(s[i]==s[i+1] )cnt++;
			else cnt=1;
			mx = max(mx,cnt);
		}
		cout<<mx<<endl;
	
	
}