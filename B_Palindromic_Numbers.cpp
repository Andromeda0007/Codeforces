#include <bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mp  make_pair
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define reverse(v1)         reverse(v1.begin(), v1.end())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define tolower(s1)         transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)         transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define remove_char(s1, a)  s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end())
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
        
        string s1;
        cin >> s1;
    
        if(s1[0]=='9')
        {
            vector<int> v1;
            printvec(v1);
            vector<int> v2;
            for(int i=0; i<s1.size(); i++)
            {
                int k = s1[i] - '0';
                v1.pb(k);
            }

            bool flag = true;
            int count=0;
            for(int i=n-1; i>=0; i--)
            {
                if(i==0 && v1[1]==0)
                {
                    v2.pb(11-v1[i]);
                }
                else
                {
                    if(v1[i]==0 && flag==true)
                    {
                        v2.pb(1);
                    }
                    else
                    {

                        if(v1[i]==0 && count==0)
                        {
                            v2.pb(0);
                            count++;
                        }
                        else if(v1[i]==0 && count==1)
                        {
                            v2.pb(1);
                        }
                        else
                        {
                            if(flag == true)
                            {
                                v2.pb(11-v1[i]);
                                flag = false;
                            }
                            else
                            {
                                if(v1[i+1]==0)
                                {
                                    int k = 11-v1[i];

                                    if(k==10)
                                    {
                                        v2.pb(0);
                                        cout << "apple" << endl;
                                    }
                                    else
                                    {
                                        v2.pb(k);
                                    }

                                    
                                }
                                else
                                {
                                    v2.pb(10-v1[i]);
                                }
                                
                            }
                            count=0;
                        }
                    }       
                }
            }
                
            reverse(v2);

            for(int i=0; i<n; i++)
            {
                cout << v2[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for(int i=0; i<s1.size(); i++)
            {
                int k = s1[i] - '0';
                k = 9-k;
                cout << k;
            }
            cout << endl;
        }
        
	}
}


