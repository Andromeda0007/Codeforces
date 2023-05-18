#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,k;
        cin>>n>>s>>k;
        int arr[k];
        int e=0;
        map<int,int>m;
        for(int i=0;i<k;i++)
        {
           cin>>arr[i];
           m[arr[i]]++;
        }
        int i=0;
        while(1)
        {
            if((m[s-i]==0 && s-i>0) )
            {
                break;
            }
            else if(m[s+i]==0 && s+i<=n)
            {
                break;
            }
            i++;
        }
        cout<<i<<endl;
    }
}