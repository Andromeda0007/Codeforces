#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define reverse(v1)         reverse(v1.begin(), v1.end())
#define deb(x)              cout << #x <<  " = " << x << endl;
int gcd(int a,int b)        { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)        { return a/gcd(a,b)*b; }  // take a = v[0];

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

        vector<int> v1;
        inputvec(v1, n);

        vector<int> v2;
        for(int i=0; i<n; i++)
        {
            int k = abs(v1[i]- (i+1));
            v2.pb(k);
        }

        int a = v2[0];
        for(int i=0; i<n; i++)
        {
            a = gcd(v2[i], a);
        }

        cout << a << endl;

    }
}