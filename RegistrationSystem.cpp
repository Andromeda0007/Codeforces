#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    map<string, int> m1;

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s1;
        cin >> s1;
        
        if(m1[s1]==0)
        {
            cout << "OK" << endl;
            m1[s1]++;
        }
        else
        {
            cout << s1 << m1[s1] << endl;
            m1[s1]++;
        }
    }
}