#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        int n = s1.size()-1;
        vector<vector<char>> v1;

        vector<char> v3;

        for(int i=0; i<s1.size(); i++)
        {
            v3.push_back(s1[i]);
        }
        v1.push_back(v3);
        
        while(n--)
        { 
            vector<char> v2;

            string s2 ="";
            s2  += s1[s1.size()-1];

            for(int i=0; i<s1.size()-1; i++)
            {
                s2 += s1[i];
            }

            for(int i=0; i<s1.size(); i++)
            {
                v2.push_back(s2[i]);
            }
            
            cout << s2 << endl;
            s1 = s2;
        }

        for(int i=0; i<v1.size(); i++)
        {
            for(int j=0; j<v1[i].size(); j++)
            {
                cout << v1[i][j] << " ";
            }

            cout << endl;
        }

    }
}