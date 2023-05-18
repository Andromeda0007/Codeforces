#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
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

    vector<int> v1;
    
    for(auto &value : m1)
    {
        v1.push_back(value.second);
    }
    reverse(v1.begin(), v1.end());


    int total=0;
    int count=0;

    for(int i=0; i<v1.size()-1; i++)
    {
        int k = min(v1[i], v1[i+1]);

        if(k==v1[i])
        {
            total += k;
        }
        else
        {
            total += k;
            int diff = v1[i]-v1[i+1];
            v1[i+1] += diff;
        }
    }

    cout << total << endl;

}