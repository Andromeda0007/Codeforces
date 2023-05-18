#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for(int i=0; i<n-2; i++)
    {
        for(int j=n-1; j>=i+2; j--)
        {
            int k = arr[j] - arr[i];
            if(k<=d)
            {
                int diff = j-i-1;
                count += (diff*(diff+1))/2;
                break;
            }
        }
    }

    cout << count << endl;
}