#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for(int i=0; i<n-1; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for(int i=0; i<n-2; i++)
    {
        int x;
        cin >> x;
        v3.push_back(x);
    }
    
    int ans1, ans2;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());

    for(int i=0; i<n-1; i++)
    {
        if(v1[i]!=v2[i])
        {
            ans1 = v1[i];
            break;
        }

        if(i==n-2)
        {
            ans1 = v1[n-1];
        }
    }

    for(int i=0; i<n-2; i++)
    {
        if(v2[i]!=v3[i])
        {
            ans2 = v2[i];
            break;
        }

        if(i==n-3)
        {
            ans2  = v2[n-2];
        }
    }

    cout << ans1 << endl;
    cout << ans2 << endl;
}