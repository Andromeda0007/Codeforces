#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> v1;
    int arr2[111111] ={};
    
    for(int i=2; i<=111111; i++)
    {
        if(arr2[i]==0)
        {
            for(int j=i*i; j<=111111; j+=i)
            {
                if(arr2[j]==0)
                {
                    arr2[j]=1;
                }
            }
        }
    }
    
    for(int i=2; i<=111111; i++)
    {
        if(arr2[i]==0)
        {
            v1.push_back(i);
        }
    }


    int arr1[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            auto it = lower_bound(v1.begin(), v1.end(), arr[i][j]);
           
           int diff = *it - arr[i][j];
           arr1[i][j] = diff;
        }
    }
    
    int min = INT_MAX;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
            sum += arr1[i][j];
        }

        if(sum<min)
        {
            min = sum;
        }
    }
    for(int j=0; j<m; j++)
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr1[i][j];
        }

        if(sum<min)
        {
            min = sum;
        }
    }

    cout << min << endl;
}
