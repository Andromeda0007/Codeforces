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
#define primefactor(n)          
int gcd(int a,int b)            { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)            { return a/gcd(a,b)*b; }  // take a = v[0];

vector<int> v1;
void factors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            v1.pb(i);
        }
    }
}
signed main()
{
    IO_FAST
    vector<string> v;
    int t = 1;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s1;
        cin >> s1;

        factors(n);
        int ans;
         
        for(int i=0; i<v1.size(); i++)
        {
            set<string> s;
            int count = 0;
            string s2 = "";
            for(int j=0; j<n; j++)
            {
                s2 += s1[j];
                count++;
                if(count==v1[i])
                {
                    s.insert(s2);
                    s2 = "";
                    count=0;
                }
            }
            if(s.size()==1)
            {
                ans = v1[i];
                break;
            }
        }
        if(ans==n && s1[0]==s1[n-1] && ans!=1)
        {
            string s3 = s1;
            s3.erase(s3.begin());
            string str = s1;

            for(int i=0; i<k-1; i++)
            {
                str += s3;
            }

            cout << str << endl;
        }
        else if(ans==n && n%2==1)
        {
            
        }
        else
        {
            string s4 = "";

            for(int i=0; i<ans; i++)
            {
                s4+=s1[i];
            }

            string str = s1;
            for(int i=0; i<k-1; i++)
            {
                str += s4;
            }

            cout << str << endl;
        }
    }

}
  


