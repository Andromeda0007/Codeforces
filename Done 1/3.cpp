#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define reverse(v1)         reverse(v1.begin(), v1.end())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define pb  push_back
#define mp  make_pair
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
        vector<pair<int,string>> v1;

        vector<pair<int,string>> v2;
        vector<pair<int,string>> v3;
        vector<pair<int,string>> v4;

        for(int i=0; i<n; i++)
        {
            int x;
            string s1;
            cin >> x;
            cin >> s1;

            v1.pb(mp(x,s1));

            if(s1=="10")
            {
                v2.pb(mp(x,s1));
            }
            else if(s1=="01")
            {
                v3.pb(mp(x,s1));
            }
            else if(s1=="11")
            {
                v4.pb(mp(x,s1));
            }
        }

        int a, b, c;
        sort(v2);
        sort(v3);
        sort(v4);

        if(v2.size()!=0)
        {
            a = v2[0].first;
        }
       
        if(v3.size()!=0)
        {
            b = v3[0].first;
        }
        
        if(v4.size()!=0)
        {
            c = v4[0].first;
        }


        if((v2.size()==0 || v3.size()==0) && v4.size()==0)
        {
            cout << -1 << endl;
        }
        else if(v2.size()!=0 && v3.size()!=0 && v4.size()!=0)
        {
            cout << min(a+b, c) << endl;
        }
        else if((v2.size()==0 || v3.size()==0) && v4.size()!=0)
        {
            cout << c << endl;
        }
        else if (v4.size()==0)
        {
            cout << a+b << endl;
        }

    }   
}