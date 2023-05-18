#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define reverse(v1)         reverse(v1.begin(), v1.end())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define pb  push_back
#define mp  make_pair
signed main()
{
    IO_FAST
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count1=0;
        vector<vector<int>> v1;

        for(int i=0; i<n; i++)
        {
            vector<int> v2;

            int m;
            cin >> m;
            if(m==0)
            {
                count1++;
            }
            for(int j=0; j<m; j++)
            {
                int x;
                cin >> x;
                v2.pb(x);
            }

            v1.pb(v2);
        }

        if(count1==n)
        {
            cout << "IMPROVE" << endl;
            cout << 1 << " " << 1 << endl;
        }
        else
        {

            map<int,int> m1;
            int pos;

            for(int i=0; i<n; i++)
            {
                int count=0;
                for(int j=0; j<v1[i].size(); j++)
                {
                    if(m1[v1[i][j]]==0)
                    {
                        m1[v1[i][j]]++;
                        break;
                    }
                    else
                    {
                        count++;
                    }
                }
                if(count==v1[i].size())
                {
                    pos = i+1;
                }
            }

            int ans;
            int count=0;
            vector<int> v;

            for(auto &value : m1)
            {
                int x = value.first;
                v.pb(x);
            }

            for(int i=0; i<v.size(); i++)
            {
                if(v[i] != (i+1))
                {
                    ans = i+1;
                    break;
                }
                if(i==v.size()-1)
                {
                    ans = i+2;
                }
            }

            if(m1.size()==n)
            {
                cout << "OPTIMAL" << endl;
            }    
            else
            {
                cout << "IMPROVE" << endl;

                cout << pos << " " << ans << endl;
            }    
        }


        
    }
}