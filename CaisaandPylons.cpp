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

    int money=arr[0];
    int height=arr[0];
    int energy=0;

    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]>arr[i]&& energy!=0)
        {
            int k = energy-(arr[i+1]-arr[i]);

            if(k>=0)
            {
                height += arr[i+1] - arr[i];
                energy -= arr[i+1] - arr[i];
            }
            else
            {
                height += arr[i+1] - arr[i];
                energy = 0;
                money += -(k);
            }
            
        }
        else if(arr[i+1]>arr[i]&& energy==0)
        {
            height += arr[i+1] - arr[i];
            money += arr[i+1]-arr[i];
        }
        else
        {
            height = arr[i+1];
            energy += arr[i] - arr[i+1];
        }
    }

    cout << money << endl;

}