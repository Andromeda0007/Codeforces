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
    vector<string> v;
    int t = 1;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        bool flag = true;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int count=0;
        vector<pair<int,int>> v1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==1)
                {
                   if( i!= n-1 && j!=m-1 && arr[i][j+1]==1 && arr[i+1][j]==1 && arr[i+1][j+1]==1) 
                   {
                        count++;
                        v1.pb(mp(i+1,j+1));
                        continue;
                   }
                   else if(i!= 0 && j!=0 && i!=arr[i][j-1]==1 && arr[i-1][j]==1 && arr[i-1][j-1]==1)
                   {
                        count++;
                        v1.pb(mp(i+1,j+1));
                        continue;
                   }
                   else if(i!= 0 && j!=m-1 && arr[i-1][j]==1 && arr[i][j+1]==1 && arr[i-1][j+1]==1)
                   {    
                        count++;
                        v1.pb(mp(i+1,j+1));
                        continue;
                   }
                   else if(i!=n-1 && j!=0 && arr[i+1][j]==1 && arr[i][j-1]==1 && arr[i+1][j-1]==1)
                   {    
                        count++;
                        v1.pb(mp(i+1,j+1));
                        continue;
                   }
                   else
                   {
                        flag = false;
                   }
                }
            }   
        }

        if(flag)
        {
            cout << count << endl;
            for(auto &value : v1)
            {
                cout << value.first << " " << value.second << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}