#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v1;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    sort(v1.begin(), v1.end(), greater<int>());

    vector<int> v2;
    v2.push_back(0);

    int k=0;
    for(int i=0; i<n; i++)
    {
        k += v1[i];
        v2.push_back(k);
    }


    while(t--)
    {
        int x, y;
        cin >> x >> y;

        int k = v2[x] - v2[x-y];

        cout << k << endl;

    }
}