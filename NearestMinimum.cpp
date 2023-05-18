#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v1;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(make_pair(x, i+1));
    }

    sort(v1.begin(), v1.end());
    int min = INT_MAX;

    int num = v1[0].first;

    for(int i=0; i<n-1; i++)
    {
        if(v1[i+1].first==num)
        {
            if(v1[i].first == v1[i+1].first)
            {
                int k = v1[i+1].second - v1[i].second;
                
                if(k<min)
                {
                    min = k;
                }
            }
        }
        
    }

    cout << min << endl;
}