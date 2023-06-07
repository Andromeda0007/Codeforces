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
        int n, k;
        cin >> n >> k;

        vector<int> v1;
        inputvec(v1, n);

        vector<int> v2;

        for(int i=0; i<n; i++)
        {
            int x = k-(v1[i]%k);
            if(x%k!=0)
            {
                v2.pb(x);
            }

        }

        if(v2.size()==0)
        {
            cout << 0 << endl;
        }
        else
        {
            map<int,int> m1;

            for(int i=0; i<v2.size(); i++)
            {
                if(v2[i]!=0)
                {
                    m1[v2[i]]++;
                }
            }

            int max = INT_MIN;
            int ans1=0;

            for(auto &value : m1)
            {
                if(value.second>=max)
                {
                    max = value.second;
                    ans1 = value.first;
                }
            }

            int ans = (max-1)*k + ans1+1;

            cout << ans << endl;

        }
   
	}
}


