#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v1;
    
    int a = (arr[1]-arr[0]);
    int b = (arr[n-1]-arr[n-2]);

    v1.push_back(a);
    for(int i=1; i<n-1 ; i++)
    {
        int k = min((arr[i]-arr[i-1]), (arr[i+1]-arr[i]));
        v1.push_back(k);
    }
    v1.push_back(b);

    vector<int> v2;

    for(int i=0; i<n; i++)
    {
       int k = max((arr[i]-arr[0]), (arr[n-1]-arr[i])); 
       v2.push_back(k);
    }

    vector<pair<int,int>> v;

    for(int i=0; i<n; i++)
    {
        v.push_back(make_pair(v1[i],  v2[i]));
    }

    for(auto &value : v)
    {
        cout << value.first << " " << value.second << endl;
    }

}