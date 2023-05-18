#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v1;
        map<string, int> m1;

        string s;
        for(int i=0; i<n; i++)
        {
            string s1;
            cin >> s1;
            m1[s1]++;
            if(i==0)
            {
                s=s1;
            }
        }

        for(auto &value : m1)
        {
            if(value.first==s)
            {
                cout << value.second << endl;
                break;
            }
        }
    }
}