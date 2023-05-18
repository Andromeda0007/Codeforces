#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    for(int i=0; i<s2.size()/2; i++)
    {
        if(s2[i]==s2[s2.size()-1-i])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    map<string, int> m1;
    
    for(int i=0; i<=s1.size()-s2.size();)
    {
        string s = "";
        for(int j=i; j<s2.size()+i; j++)
        {
            s += s1[j];
        }
        if(s==s2)
        {
            i+=s2.size();
        }
        else
        {
            i++;
        }

        m1[s]++;
    }

    bool flag = false;
    for(auto &value : m1)
    {
        if(value.first==s2)
        {
            cout << value.second-count << endl;
            flag = true;
            break;
        }
    }

    if(flag == false)
    {
        cout << 0 << endl;
    }

    
}