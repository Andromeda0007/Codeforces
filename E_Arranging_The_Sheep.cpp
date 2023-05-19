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

        int count1=0;
        vector<pair<int,int>> v1;
        int count=0;
        int count2=1;
    
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='.')
            {
                count2++;
                v1.pb(mp(0,0));
            }
            else
            {
                count1++;
                count++;
                v1.pb(mp(count, count2));
            }
            
        }


        if(count1==0 || count1==1)
        {
            cout << 0 << endl;
        }
        else if(count1==2)
        {
            int num1, num2;

            for(int i=0; i<n; i++)
            {
                if(v1[i].first==1)
                {
                    num1 = v1[i].second;
                }
                else if(v1[i].first==2)
                {
                    num2 = v1[i].second;
                }
            }
            cout << num2-num1 << endl;
        }
        else if(count1%2==1)
        {
            int num;
            int sum = 0;
            for(int i=0; i<n; i++)
            {
                if(v1[i].first == ((count1/2)+1))
                {
                    num = v1[i].second;
                    break;
                }
            }

            for(int i=0; i<n; i++)
            {
                if(v1[i].first>0 && v1[i].first!=((count1/2)+1))
                {
                    sum += abs(num-v1[i].second);
                }
            }

            cout << sum << endl;
        }
        else
        {
            int num1;
            int sum1 = 0;
            for(int i=0; i<n; i++)
            {
                if(v1[i].first == ((count1/2)+1))
                {
                    num1 = v1[i].second;
                    break;
                }
            }

            for(int i=0; i<n; i++)
            {
                if(v1[i].first>0 && v1[i].first!=((count1/2)+1))
                {
                    sum1 += abs(num1-v1[i].second);
                }
            }

            int num2;
            int sum2 = 0;
            for(int i=0; i<n; i++)
            {
                if(v1[i].first == ((count1/2)))
                {
                    num2 = v1[i].second;
                    break;
                }
            }

            for(int i=0; i<n; i++)
            {
                if(v1[i].first>0 && v1[i].first!=((count1/2)))
                {
                    sum2 += abs(num2-v1[i].second);
                }
            }

            int ans = min(sum1, sum2);
            cout << ans << endl;
        }

	}
}


