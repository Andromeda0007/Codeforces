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
        int arr1[n];
        int arr2[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
        }

        for(int i=0; i<n; i++)
        {
            cin >> arr2[i];
        }

        int position1;
        int position2;

        int pos1;
        int pos2;
        for(int i=0; i<n; i++)
        {
            if(arr1[i]!=arr2[i])
            {
                pos1=i+1;
                position1 = i;
                break;
            }
        }

        for(int i=n-1; i>position1; i--)
        {
            if(arr1[i]!=arr2[i])
            {
                pos2 = i+1;
                position2 = i;
                break;
            }

        }

        int k = arr2[position1];

        int count1=0;
        for(int i=position1-1; i>=0; i--)
        {
            if(arr1[i]<=k)
            {
                count1++;
                k=arr1[i];
            }
            else
            {
                break;
            }
        }

        int count2=0;
        int l = arr2[position2];

        for(int i=position2+1; i<n; i++)
        {
            if(arr1[i]>=l)
            {
                count2++;
                l=arr1[i];
            }
            else
            {
                break;
            }
        }

        cout << pos1-count1 << " " << pos2+count2 << endl;
    }
}