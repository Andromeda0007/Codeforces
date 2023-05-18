#include<bits/stdc++.h>
using namespace std;
#define IO_FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define TEST long long int t;cin >>t;while(t--)
#define int long long int
signed main()
{
    IO_FAST
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
        for(int i=1; i<n; i+=2)
        {
            v2.push_back(arr[i]+arr[i-1]);
            v3.push_back(arr[i]+arr[i-1]);
        }

        for(int i=0; i<v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;

        for(int i=0; i<v3.size(); i++)
        {
            cout << v3[i] << " ";
        }
        cout << endl;

        for(int i=n-1; i>=0;i--)
        {
            v1.push_back(arr[i]);
            v4.push_back(arr[i]);
        }

        for(int i=0; i<v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;

        for(int i=0; i<v4.size(); i++)
        {
            cout << v4[i] << " ";
        }
        cout << endl;

        for(int i=1; i<v3.size(); i++)
        {
            v3[i]+=v3[i-1];
        }

        for(int i=1;i<v4.size();i++)
        {
            v4[i]+=v4[i-1];
        }

        for(int i=0; i<v3.size(); i++)
        {
            cout << v3[i] << " ";
        }
        cout << endl;

        for(int i=0; i<v4.size(); i++)
        {
            cout << v4[i] << " ";
        }
        cout << endl;

        int minm=INT_MAX;

        minm=min(v3[k-1],v4[k-1]);

        for(int i=0; i<k-1; i++)
        {
            minm=min(minm,min(v3[i]+v4[k-2-i],v4[i]+v3[k-2-i]));
        }
        cout<<sum-minm<<endl;
    }
}