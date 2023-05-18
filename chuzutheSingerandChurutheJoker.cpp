#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int count = 0;
    bool flag = true;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        
        if(i!=n-1)
        {
            sum += 10;
        }
        
        if(sum>d)
        {
            flag = false;
            break;
        }
    }

    if(flag == false)
    {
        cout << "-1" << endl;
    }
    else
    {
        int k = d-sum;
        
        int extra = k/5;

        count += (n-1)*2 + extra;
        
        cout << count << endl;
    }

}