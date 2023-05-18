#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i]==1)  count1++;
        else if(arr[i]==2)  count2++;
        else if(arr[i]==3)  count3++;
        else   count4++;
    }

    int taxi = 0;
    taxi += count4;

    if(count2%2==0)  taxi += count2/2;
    else
    {
        taxi += count2/2 + 1;
        count1 -= 2;
    }

    int k = min(count1, count3);

    if(k==count3)
    {
        taxi += count3;
        count1 -= count3;

        if(count1%4==0)
        {
            taxi += count1/4;
        }
        else
        {
            taxi += count1/4 + 1;
        }
    }
    else
    {
        taxi += count1;
        count3 -= count1;
        taxi += count3;
        
    }
    

    cout << taxi << endl;
}