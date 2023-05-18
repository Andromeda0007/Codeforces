#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        set<int> s;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            s.insert(x);
        }
        
        if(s.size()==1)
        {
            cout << "-1" << endl;
        }
        else
        { 
            int ans;
            int x  = *(--s.end());

            // for(int i=0; i<n; i++)
            // {
            //     if(v1[i] == x && (v1[i-1]<x || v1[i+1]<x))
            //     {
            //         ans = i+1;
            //         break;
            //     }
            // }
            bool flag = false;
            for(int i=0; i<n-1; i++)
            {
                if(v1[i]==x && v1[i+1]<x)
                {
                    ans = i+1;
                    flag = true;
                    break;
                }  
            }

            if(flag == false)
            {
                for(int i=1; i<n; i++)
                {
                    if(v1[i]==x && v1[i-1]<x)
                    {
                        ans = i+1;
                        break;
                    }  
                }
            }
            
            cout << ans << endl;

        }
    }
}