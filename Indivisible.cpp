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

        if(n==1)
        {
            cout << 1 << endl;
        }
        else if(n%2==1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> v1;
            vector<int> v2;

            for(int i=n; i>=1; i--)
            {
                if(i%2==0)
                {
                    v1.push_back(i);
                }
                else
                {
                    v2.push_back(i);
                }
            }

            for(int i=0; i<v1.size()-1; i++)
            {
                cout << v2[i] << " " << v1[i] << " ";
            }
            cout << v2[v2.size()-1] << " " << v1[v1.size()-1] << endl;
        }

        
    }
}