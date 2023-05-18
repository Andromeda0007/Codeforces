#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr1[n];
        int arr2[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
            arr2[i]=arr1[i];
        }

        sort(arr2, arr2+n);
        int count = 0;

        for(int i=0; i<n; i++)
        {
            if(abs(arr1[i]-arr2[i])%k!=0)
            {
                count++;
            }
        }

        if(count == 0)
        {
            cout << 0 << endl;
        }
        else if (count==1 || count==2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}