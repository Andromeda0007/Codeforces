#include <bits/stdc++.h>
using namespace std;
#define int long long
int fact(int n)
{
    if(n==0) return 1;

    int num = n*fact(n-1);
}
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int,int> m1;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            m1[arr[i]]++;
        }

        vector<pair<int,int>> v1;

        for(auto &value: m1)
        {
            int x = value.first;
            int y = value.second;
            v1.push_back(make_pair(x,y));
        }

        int total = 0;

        for(int i=0; i<n; i++)
        {
            if(v1[i].second>1)
            {
                int num = v1[i].second;
                int k = fact(num);
                total += k;
            }
        }

        vector<int> v;

        for(auto &value : m1)
        {
            v.push_back(value.first);
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; i<n; i++)
            {
                int k = v[j]/v[i];
                if(k*v[i])
            }
        }




    }
}