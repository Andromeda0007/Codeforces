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
        
        while(arr[i]%2==0)
        {
            arr[i] = arr[i]/2;
        }
        while(arr[i]%3==0)
        {
            arr[i] = arr[i]/3;
        }
    }

    bool flag = true;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[0])
        {
            flag = false;
        }
    }

    flag? cout << "YES\n" : cout << "NO\n";
}