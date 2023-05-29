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
        int n;
        cin >> n;
        vector<pair<int,string>> v1;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x==0)
            {
                v1.pb(mp(0 , "Rest"));
            }
            else if(x==1)
            {
                v1.pb(mp(1 , "Contest"));
            }
            if(x==2)
            {
                v1.pb(mp(2 , "Gym"));
            }
            if(x==3)
            {
                v1.pb(mp(3, "Apple"));
            }
        }

        for(auto &value : v1)
        {
            cout << value.first << " " << value.second << endl;
        }

        cout << endl;
        int count1=0;
        for(int i=0; i<n; i++)
        {
            if(v1[i].first != 3)
            {
                break;
            }
            else
            {
                count1++;
            }
        }

        int count2=0;
        for(int i=n-1; i>=0; i--)
        {
            if(v1[i].first != 3)
            {
                break;
            }
            else
            {
                count2++;
            }
        }

        int a = v1[count1].first;
        int b = v1[n-count2-1].first;

        if(b==1)
        {
            int ct=0;
            for(int i=n-count2; i<n; i++)
            {
                if(ct%2==0)
                {
                    v1[i].second = "Gym";
                }
                else
                {
                    v1[i].second = "Contest";
                }
                ct++;
            }
        }
        else 
        {
            int ct=0;
            for(int i=n-count2; i<n; i++)
            {
                if(ct%2==0)
                {
                    v1[i].second = "Contest";
                }
                else
                {
                    v1[i].second = "Gym";
                }
                ct++;
            }
        }

        if(a==1)
        {
            int ct = 0;
            for(int i=count1-1; i>=0; i--)
            {
                if(ct%2==0)
                {
                    v1[i].second = "Contest";
                }
                else
                {
                    v1[i].second = "Gym";
                }
                ct++;
            }
        }
        else
        {
            int ct = 0;
            for(int i=count1-1; i>=0; i--)
            {
                if(ct%2==0)
                {
                    v1[i].second = "Contest";
                }
                else
                {
                    v1[i].second = "Gym";
                }
                ct++;
            }
        }

        string s1;
        for(int i=0; i<n; i++)
        {
            if(v1[i].second == "Apple")
            {
                if(v1[i-1].second=="Gym")
                {
                    s1 = "Contest";
                }
                else
                {
                    s1 = "Gym";
                }

                v1[i].second = s1;

                if(s1 == "Gym")
                {
                    s1 = "Contest";
                }
                else
                {
                    s1 = "Gym";
                }
            }
        
        }

          int count = 0;
        for(int i=0; i<n-1;)
        {
            if((v1[i].second == v1[i+1].second) && v1[i].second!="Rest")
            {
                count++;
                i+=2;
            }
            else
            {
                i++;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(v1[i].second == "Rest")
            {
                count++;
            }
        }


        for(auto &value : v1)
        {
            cout << value.first << " " << value.second << endl;
        }

        cout << count << endl;

	}
}


