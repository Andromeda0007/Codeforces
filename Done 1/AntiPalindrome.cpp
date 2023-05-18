#include<bits/stdc++.h>
using namespace std;	
#define int long long
signed main()
{
	string s1;
	cin >> s1;

   	string s2 = s1;
   	reverse(s2.begin(), s2.end());
	if(s2 == s1)
	{
		bool flag = false;
		for(int i=1; i<s1.size(); i++)
		{
			if(s1[i] != s1[i-1])
			{
				flag = true;
				break;
			}
		}
		if(flag)
		{
			cout << s1.size() - 1;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << s1.size();
	}
	cout << endl;
}    