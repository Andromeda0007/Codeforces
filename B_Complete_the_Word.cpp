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
        string s1;
        cin >> s1;

        if(s1.size()<26)
        {
            cout << "-1" << endl;
        }
        else
        {
            set<char> s;
            int count = 0;
            for(int i=0; i<26; i++)
            {
                if(s1[i] != '?')
                {
                    s.insert(s1[i]);
                }
                else
                {
                    count++;
                }
            }
            
            bool flag = false;
            if(count+ s.size()==26)
            {
                flag = true;
            }

            int pos=0;

            if(flag == false)
            {
                for(int i=26; i<s1.size(); i++)
                {
                    cout << "heLLO" << endl;
                    if(s.size()+count==26)
                    {
                        pos = i-26;
                        flag = true;
                        break;
                    }
                    else
                    {
                        s.insert(s1[i]);

                        auto it = s.find(s1[i-26]);
                        if(*it=='?')
                        {
                            count--;
                        }
                        s.erase (*it);   
    
                    }
                    deb(count);

                }
            }


            if(flag)
            {
                vector<char>v1;
                for(auto&value : s)
                {
                    v1.pb(value);
                }

                for(int i=65; i<=90; i++)
                {
                    char c1 = char(i);
                    v1.pb(c1);
                }
                map<char,int> m1;

                for(int i=0; i<v1.size(); i++)
                {
                    m1[v1[i]]++;
                }

                vector<char> v2;
                for(auto &value : m1)
                {
                    if(value.second==1)
                    {
                        v2.pb(value.first);
                    }
                }

                int ct=0;
                for(int i=pos; i<pos+26; i++)
                {
                    if(s1[i]=='?')
                    {
                        s1[i] = v2[ct];
                        ct++;
                    }
                }

                for(int i=0; i<s1.size(); i++)
                {
                    if(s1[i]=='?')
                    {
                        s1[i] = 'A';
                    }
                }
                cout << s1 << endl;
 
            }
            else
            {
                cout << -1 << endl;
            }
           
        }

         
	}
}


