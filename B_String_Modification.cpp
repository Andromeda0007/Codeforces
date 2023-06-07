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
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;
        set<char> s;

        for(int i=0; i<s1.size(); i++)
        {
            s.insert(s1[i]);
        }

        char c1;
        for(auto &value : s)
        {
            c1 = value;
            break;
        }


        vector<pair<string,int>> v1;
        int pos = 1;
        string s2 = "";
        for(int i=0; i<n; i++)
        {
            if(s1[i]!=c1)
            {
                s2 += s1[i];
            }
            else
            {
                v1.pb(mp(s2,pos+1));
                s2 = "";
                s2 += c1;
                pos = i;
            }
        }
        v1.pb(mp(s2,pos+1));

        if(v1[0].first=="")
        {
            v1.erase(v1.begin());
        }


        int max = INT_MIN;
        for(auto &value : v1)
        {
            int k = value.first.size();
            if(value.first.size()>max)
            {
                max = value.first.size();
            }
        }

        for(auto &value : v1)
        {
            if(value.first.size()<max)
            {
                value.first += '|';
            }
        }
        reverse(s1);
        v1.pb(mp(s1,n));

        sort(v1);
        
        string str;
        int minm = INT_MAX;
        for(int i=1; i<n; i++)
        {
            if(v1[i].first==str)
            {
                if(v1[i].second < minm);
                {
                    minm = v1[i].second;
                }
            }
            else if(v1[i].first != str)
            {
                break;
            }
        }

        for(auto &value : v1)
        {
            cout << value.first << " " < value.second << endl;
        }


        int ans = min(minm,v1[0].second);

        reverse(s1);

        string s5="";
        int count=0;
        for(int i=ans-1; i<n; i++)
        {
            s5 += s1[i];
            count++;
        }

        if(count%2==0)
        {
            for(int i=0; i<ans-1; i++)
            {
                s5 += s1[i];
            }
        }
        else
        {
            for(int i=ans-2; i>=0; i--)
            {
                s5 += s1[i];
            }
        }
        cout << s5 << endl;
        cout << ans << endl;
        deb(minm);

	}
}


