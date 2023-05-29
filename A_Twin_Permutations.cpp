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
        vector<int> v1;
        vector<int> v2;

        inputvec(v1, n);
        inputvec(v2, n);

        map<int,int> m1;
        m1[v1[0]]++;
        m1[v2[0]]++;
        vector<int> v3;

        for(auto &value:m1)
        {
            cout << value.first << " " << value.second << endl;
        }

        for(int i=1; i<n; i++)
        {
            cout << m1[v1[i]]++ << endl;
            cout << m1[v2[i]]++ << endl;
            if(m1[v1[i]]++ == 1 && m1[v2[i]]++ ==1)
            {
                cout << "apple" << endl;
                v3.pb(m1[v1[i-1]]);
                v3.pb(m1[v2[i-1]]);
                
                cout << "ln " << m1[v1[i-1]] << endl;
                cout << "an " << m1[v2[i-1]] << endl;
                m1[v1[i-1]]=0;
                m1[v2[i-1]]=0;
                cout << "ln " << m1[v1[i-1]] << endl;
                cout << "an " << m1[v2[i-1]] << endl;

                m1[v1[i]]++;
                m1[v2[i]]++;
            }
            else if(m1[v1[i]]++ == 1 && m1[v2[i]]++!=1)
            {
                cout << "ball" << endl;
                if(v1[i-1]==v2[i] && v2[i-1]!=v2[i])
                {
                    v3.pb(m1[v2[i-1]]);
                    
                    m1[v2[i-1]]=0;

                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }
                else if(v1[i-1]!=v2[i] && v2[i-1]==v2[i])
                {
                    v3.pb(m1[v1[i-1]]);
                    
                    m1[v1[i-1]]=0;

                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }
                else if(v1[i-1]==v2[i] && v2[i-1]==v2[i])
                {
                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }
            }
            else if(m1[v1[i]]++ != 1 && m1[v2[i]]++==1)
            {
                cout << "cat" << endl;
                if(v1[i-1]==v1[i] && v2[i-1]!=v1[i])
                {
                    v3.pb(m1[v2[i-1]]);
                    
                    m1[v2[i-1]]=0;

                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }   
                else if(v1[i-1]!=v1[i] && v2[i-1]==v1[i])
                {
                    v3.pb(m1[v1[i-1]]);
                    
                    m1[v1[i-1]]=0;

                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }
                else if(v1[i-1]==v1[i] && v2[i-1]==v1[i])
                {
                    m1[v1[i]]++;
                    m1[v2[i]]++;
                }
            }
            else
            {
                cout << "dog" << endl;
                m1[v1[i]]++;
                m1[v2[i]]++;
            }
        }
        v3.pb(m1[v1[n-1]]);
        v3.pb(m1[v2[n-1]]);

        deb(v3.size());
        printvec(v3);

	}
}


