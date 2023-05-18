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
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        inputvec(v1, n);

        sort(v1);
        reverse(v1);

        if((v1[1]+v1[2])<=v1[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<int> v2;
            vector<int> v3;

            for(int i=1; i<n; i++)
            {
                if(i%2==0)
                {
                    v2.pb(v1[i]);
                }
                else
                {
                    v3.pb(v1[i]);
                }
            }

            reverse(v3);

            vector<int> v;

            for(int i=0; i<v3.size(); i++)
            {
                v.pb(v3[i]);
            }

            v.push_back(v1[0]);


            for(int i=0; i<v2.size(); i++)
            {
                v.pb(v2[i]);
            }

            printvec(v);

        }

    }
}