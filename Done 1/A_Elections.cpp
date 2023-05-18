#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int p, c;
    cin >> p >> c;
    vector<int> v1;

    for(int i=0; i<c; i++)
    {
        int arr[p];
        int maxm=INT_MIN;
        int ans;

        for(int i=0; i<p; i++)
        {
            cin >> arr[i];
            if(arr[i]>maxm)
            {
                maxm = arr[i];
                ans = i+1;
            }
        }

        v1.push_back(ans);
    }

    map<int,int> m1;
    for(int i=0; i<v1.size(); i++)
    {
        m1[v1[i]]++;
    }

    int max=INT_MIN;
    int ans;

    for(auto & value : m1)
    {
        if(value.second>max)
        {
            max = value.second;
            ans = value.first;

        }
    }

    cout <<  ans << endl;

    int n, m;
    cin >> n >> m;
    

    int n, m;
    cin >> n >> m;

}