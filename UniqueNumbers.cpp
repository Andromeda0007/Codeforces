#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if(n>45)
        {
            cout << "-1" << endl;
        }
        else if (n<=9)
        {
            cout << n << endl;
        }
        else
        {
            int k=0;
            int num = n;
            int count1 = 9;
            while(num>0)
            {
                k++;
                num -= count1;
                count1--;
            }
            
            int arr[k]={};
            int count=9;

            for(int i=k-1; i>=0; i--)
            {
                if(n>=count)
                {
                    arr[i] = count;
                    n -= count;
                    count--;
                }
                else
                {
                    arr[i] = n; 
                }
            }

            for(int i=0; i<k; i++)
            {
                cout << arr[i];
            }
            cout << endl;

            
        }
        
    }
    
}