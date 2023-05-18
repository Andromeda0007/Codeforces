#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m1;
    vector<int> v1;
    vector<int> v2;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        m1[arr[i]]++;
        if(m1[arr[i]]>1)
        {
            v1.push_back(arr[i]);
        }
        else
        {
            v.push_back(arr[i]);
        }
    }

    for(int i=1; i<=n; i++)
    {
        auto it = find(v.begin(), v.end(), i);

        if(it==v.end())
        {
            v2.push_back(i);
        }
    }

    int sum = 0;

    for(int i=n+1; i<3001+n+1; i++)
    {
        v2.push_back(i);
    }

    sort(v1.begin(), v1.end());
    sort(v2.end(), v2.end());
    sort(v.begin(),v.end());

    int pos=0;
    for(int i=0; i<v1.size(); i++)
    {
        for(int j=pos; j<v2.size(); j++)
        {
            if(v2[j]>v1[i])
            {
                sum += v2[j]-v1[i];
                pos=j+1;
                break;
            }
        }
    }
    cout << sum << endl;
}