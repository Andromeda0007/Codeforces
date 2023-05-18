#include <bits/stdc++.h>
using namespace std;
#define int   long long
int gcd(int a, int b)
{
    int minm = min(a, b);
    while (minm > 0) 
    {
        if (a % minm == 0 && b % minm == 0) 
        {
            break;
        }
        minm--;
    }
    return minm; 
}
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n , greater<int>());

        vector<int> v1;

        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==1)
            {
                v1.push_back(arr[i]);
            }
        }
        int k = n - v1.size();

        int count=0;
        for(int i=1; i<=k; i++)
        {
            count += n-i;
        }

        for(int i=0; i<v1.size()-1; i++)
        {
            for(int j=i+1; j<v1.size(); j++)
            {
                if(gcd(v1[i], 2*v1[j])>1)
                {
                    count ++;
                }
            }
        }

        cout << count << endl;
    }
    
}