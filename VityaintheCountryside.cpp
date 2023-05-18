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

    if(n==1)
    {
        if(arr[0]==15)
        {
            cout << "DOWN" << endl;
        }
        else if(arr[0]==0)
        {
            cout << "UP" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    else
    {
        int a = arr[n-2];
        int b = arr[n-1];

        if(b==15)
        {
            cout << "DOWN" << endl;
        }
        else if(b==0)
        {
            cout << "UP" << endl;
        }
        else if(b>a)
        {
            cout << "UP" << endl;
        }
        else
        {
            cout << "DOWN" << endl;
        }
    }
   
    
}