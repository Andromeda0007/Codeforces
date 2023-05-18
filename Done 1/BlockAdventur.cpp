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
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int num = n;
        n *= 4;

        vector<pair<int,int>> v1;
        map<int,int> m1;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            m1[x]++;
        }

        for(auto & value : m1)
        {
            if(value.second%2==1)
            {
                value.second -=1;
            }
        }

        for(auto &value : m1)
        {
            int x = value.first;
            int y = value.second;
            v1.pb(mp(y,x));
        }

        sort(v1);
 
        for(auto &value : v1)
        {
            cout << value.first << " " << value.second << endl;
        }

        vector<int> v;

        for(auto &value : v1)
        {
            for(int i=0; i<value.first/2; i++)
            {
                v.push_back(value.second);
            }
        }

        sort(v);

        
        map<int, int> m2;

        for(int i=0; i<v.size()-1; i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                int k = v[i]*v[j];
                m2[k]++;
            }
        }
        

        for(auto &value : m2)
        {
            cout << value.first << " " << value.second << endl;
        }  

        bool flag = false;
        for(auto &value : m2)
        {
            if(value.second==num)
            {
                flag = true;
                break;
            }
        }  

        flag? cout << "YES\n" : cout << "NO\n";
        cout << endl;
        cout << endl;
    }
}