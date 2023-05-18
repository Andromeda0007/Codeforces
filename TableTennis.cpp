#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    int maxm=INT_MIN;
    int pos;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>maxm)
        {
            maxm = arr[i];
            pos = i;
        }
    }
    

    if(k==1)
    {
        cout << max(arr[0], arr[1]) << endl;
    }
    else if (pos==0 || pos==1)
    {
        cout << maxm << endl;
    }
    else if(k>pos-1)
    {
        cout << maxm << endl;
    }
    else
    {
        int ans2;
        int mx = max(arr[0], arr[1]);
        int count=1;
        int i=2;
        while(i<pos)
        {
            if(mx>arr[i])
            {
                count++;
            }
            else
            {
                count=1;
                mx = arr[i];
            }

            if(count==k)
            {
                ans2 = mx;
                i++;
                break;
            }
            i++;
            if(i==pos)
            {
                ans2 = maxm;
            }
        }

        cout << ans2 << endl;
    }
}