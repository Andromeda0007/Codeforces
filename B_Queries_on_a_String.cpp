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

string s1;
string rotate(int l, int r, int k)
{
    string s3 ="";
    for(int i=l; i<=r; i++)
    {
        s3 += s1[i];
    }
    string s = "";
    k %=(r-l+1);

    for(int i=r-k+1; i<=r; i++)
    {
        s += s1[i];
    }

    for(int i=l; i<=r-k; i++)
    {
        s += s1[i];
    }

    
    string s2="";
    for(int i=0; i<l; i++)
    {
        s2 += s1[i];
    }
    
    s2 += s;

    for(int i=r+1; i<s1.size(); i++)
    {
        s2 += s1[i];
    }
    s1 =  s2;
    return s2;

}
signed main()
{
    IO_FAST
    vector<string> v;
    cin >> s1;
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        rotate(l-1, r-1, k);
    }
    cout << s1 << endl;

}


