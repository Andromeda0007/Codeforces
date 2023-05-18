#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v1(n);

    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end());

    int a = v1[0];
    int b = v1[v1.size()-1];

    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;

        if(k<a)
        {
            cout << 0 << endl;
        }
        else if (k>=b)
        {
            cout << n << endl;
        }
        else
        {
            auto it = upper_bound(v1.begin(), v1.end(), k);
            cout << it-v1.begin() << endl;
        }
    }
}