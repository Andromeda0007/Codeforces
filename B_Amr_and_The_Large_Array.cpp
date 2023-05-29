#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)            for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)         for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)                sort(v1.begin(), v1.end())
#define reverse(v1)             reverse(v1.begin(), v1.end())
#define deb(x)                  cout << #x <<  " = " << x << endl;
#define tolower(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define remove_char(s1, a)      s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end())  // does not work!
#define upperbound(v1, k)       upper_bound(v1.begin(), v1.end(), k)
#define lowerbound(v1, k)       lower_bound(v1.begin(), v1.end(), k)
int gcd(int a,int b)            { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)            { return a/gcd(a,b)*b; }  // take a = v[0];
signed main()
{
    IO_FAST
    vector<string> v;
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        inputvec(v, n);

        map<int,int> m;
        map<int,int> m1;
        map<int,int> m2;


        vector<pair<int,int>> v1;
        vector<pair<int,int>> v2;

        for(int i=0; i<n; i++)
        {
            m[v[i]]++;

            if(m1[v[i]]==0)
            {
                v1.pb(mp(v[i], i));
                m1[v[i]]++;
            }
        }
        sort(v1);
        for(int i=n-1; i>=0; i--)
        {
            if(m2[v[i]]==0)
            {
                v2.pb(mp(v[i], i));
                m2[v[i]]++;
            }
        }
        
        sort(v2);

        vector<pair<int,int>> v3;
        for(auto &value : m)
        {
            v3.pb(mp(value.second, value.first));
        }

        sort(v3);
        reverse(v3);

        int max = v3[0].first;

        vector<int> v4;

        for(int i=0; i<v3.size(); i++)
        {
            if(v3[i].first == max)
            {
                v4.pb(v3[i].second);
            }
            else
            {
                break;
            }
        }

        vector<pair<int,int>> v5;

        vector<int> v6;
        for(auto & value : v1)
        {
            v6.pb(value.first);
        }

        for(int i=0; i<v4.size(); i++)
        {
            auto it = lower_bound(v6.begin(), v6.end(), v4[i]);
            int pos = it - v6.begin();
            int a = v1[pos].second+1;
            int b = v2[pos].second+1;
            v5.pb(mp(a, b));
        }


        int minm = INT_MAX;
        int k, l;

        for(auto &value : v5)
        {
            int d = value.second - value.first;
            if(d <minm)
            {
                minm = d;
                k = value.first;
                l = value.second;
            }
        }

        cout << k << " " << l << endl;

	}
}


