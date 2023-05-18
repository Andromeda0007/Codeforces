#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v1(n, 0);
    for(int i=0; i<n-2; i++)
    {
        if(arr[i]>=arr[i+1] && arr[i+1]>=arr[i+2])
        {
            v1[i+2]+=1;
        }
    }
    for(int i=1; i<n; i++)
    {
        v1[i] = v1[i]+ v1[i-1];
    }

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        int diff = r-l+1;

        if(diff>2)
        {
            diff -=v1[r-1] - v1[l];
        }

        cout << diff << endl;
    }
}