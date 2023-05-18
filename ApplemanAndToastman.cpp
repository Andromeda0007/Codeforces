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

    sort(arr, arr+n);

    if(n==1)
    {
        cout << arr[0] << endl;
    }
    else
    {
         int sum = 0;

        for(int i=0; i<n-2; i++)
        {
            int k = arr[i]*(i+2);
            sum += k;
        }

        sum += n*arr[n-2];
        sum += n*arr[n-1];

        cout << sum << endl;
    }

}
