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
        int n;
        cin >> n;
        map<int,int> m1;
        map<int,int> m2;
        map<pair<int,int>,int> m3;
        int z=0;

        vector<int>v1;
        vector<int>v2;
        vector<pair<int,int>> v3;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            if(m1[x]==0)
            {
                v1.push_back(x);
            }
            if(m2[y]==0)
            {
                v2.push_back(y);
            }
            pair<int,int> p1;
            p1.first=x;
            p1.second=y;
            if(m3[p1]==0)
            {
                pair<int,int>w;
                w.first=x;
                w.second=y;
                v3.push_back(w);
            }
            m3[p1]++;
            m1[x]++;
            m2[y]++;
        }
        int sum=0;

        for(int i=0; i<v1.size(); i++)
        {
            sum +=((m1[v1[i]])*(m1[v1[i]]-1)/2);
        }

        for(int i=0; i<v2.size(); i++)
        {
            sum+=((m2[v2[i]])*(m2[v2[i]]-1)/2);
        }

        for(int i=0; i<v3.size(); i++)
        {
            if( m3[v3[i]] > 1)
            {
                sum-=(m3[v3[i]]*(m3[v3[i]]-1))/2;
            }
        }

        cout << sum;
    }
}
