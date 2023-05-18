#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n;
    cin >> n;
    vector<string> v1;
    vector<string> v2;
    map<string, int> m1;

    for(int i=0; i<n; i++)
    {
        string s1;
        cin >> s1;
        v1.push_back(s1);
    }

    for(int i=n-1; i>=0; i--)
    {
        if(m1[v1[i]]==0)
        {
            v2.push_back(v1[i]);
        }

        m1[v1[i]]++;

    }

    for(auto & value : v2)
    {
        cout << value << endl;
    }
}