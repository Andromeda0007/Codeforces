#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string s1;
    cin >> s1;
    vector<int> v1;
    int sum=0;
    v1.push_back(0);

    for(int i=0; i<s1.size()-1; i++)
    {
        if(s1[i]==s1[i+1])
        {
            sum++;
        }
        v1.push_back(sum);
    }
    
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;

        cout << v1[r-1]-v1[l-1] << endl;
    }
}