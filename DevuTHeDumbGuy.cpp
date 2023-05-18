#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int time = 0;
    
    for(int i=0; i<n; i++)
    {
        if(k>1)
        {
            int num = k*arr[i];
            time += num;
            k--;
        }
        else
        {
            time += arr[i];
        }
    }

    cout << time << endl;

}