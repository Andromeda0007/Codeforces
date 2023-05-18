#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];

    int count = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<0)
        {
            count++;
        }
    }
    
    int total = 0;
    if(count % 2 == 0)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
            {
                int k = arr[i] - 1;
                total += k;
            }
            else if (arr[i]<0)
            {
                int k = -1 - arr[i];
                total += k;
            }
            else
            {
                total += 1;
            }
        }
    }
    else
    {
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0 )
            {
                int k = arr[i] - 1;
                total += k;
            }
            else if (arr[i]<0 && flag==false)
            {
                int k = 1 - arr[i];
                total += k;
                flag = true;
            }
            else if (arr[i]<0 && flag==true)
            {
                int k = -1 - arr[i];
                total += k;
                flag = true;
            }
            else
            {
                total += 1;
            }
        }
        
    }

    cout << total << endl;
}