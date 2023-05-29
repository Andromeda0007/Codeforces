#include <bits/stdc++.h>
using namespace std;
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
        string s1;
        cin >> s1;
        
        int c1, c2;
        int pos1, pos2;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!='?')
            {
                if(s1[i]=='0')
                {
                    c1 = 0;
                }
                else
                {
                    c1 = 1;
                }
                
                pos1 = i-1;
                break;
            }
        }

        for(int i=s1.size()-1; i>=0; i--)
        {
            if(s1[i]!='?')
            {
                pos2 = i+1;
                if(s1[i]=='0')
                {
                    c2 = 0;
                }
                else
                {
                    c2 = 1;
                }
                break;
            }
        }

        for(int i=0; i<=pos1; i++)
        {
            if(c1==1) s1[i] = '1';
            else  s1[i]='0';
        }

        for(int i=s1.size()-1; i>=pos2; i--)
        {
            if(c2==1) s1[i] = '1';
            else  s1[i]='0';
        }


        int a;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='1')
            {
                a = 1;
            }
            else if(s1[i]=='0')
            {
                a = 0;
            }

            else
            {
                if(a==1)
                {
                    s1[i]='1';
                }
                else
                {
                    s1[i]='0';
                }
            }
        }

        cout << s1 << endl;
	}
}


