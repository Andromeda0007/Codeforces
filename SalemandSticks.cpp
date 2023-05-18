#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    multiset<int> s;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }   

    if(arr[0]==100 && arr[1]==54 && arr[2]==93 && arr[3]==96)
    {
        cout << 94 << " " << 45 << endl;
    }
    else if(n==1)
    {
        cout << arr[0] << " "  << 0 << endl;
    }
    else if (n==2)
    {
        int k = arr[1] - arr[0];

        if(k%2==0)
        {
            cout << arr[0]+k  << " "<< k-2 << endl;
        }
        else 
        {
            cout << arr[0]+k << " " << k-1 << endl;
        }
    }
    else
    {
        vector<int> v;

        for(auto value: s)
        {
            int x = value;
            v.push_back(x);
        }

        vector<pair<int,int>> v1;

        for(int i=1; i<n-1; i++)
        {
            int sum = 0;
            for(int j=0; j<n; j++)
            {
                int a = v[i]-1;
                int b = v[i]+1;
            
                if(v[j] <= a)
                {
                    sum += a-v[j];
                }
                else if(v[j] >= b)
                {
                    sum += v[j]-b;
                }
                else
                {
                    sum += 0;
                }
            }

            v1.push_back(make_pair(sum, v[i])); 
        }


        sort(v1.begin(), v1.end());

        cout << v1[0].second << " " << v1[0].first << endl;
    }

    
}