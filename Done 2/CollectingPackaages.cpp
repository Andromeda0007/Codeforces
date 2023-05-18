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
        vector<pair<int,int>> v1;

        for(int i=0; i<n; i++)
        {
            int x, y;
            cin >> x >> y;
            v1.pb(mp(x,y));
        }

        bool flag = true;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(((v1[i].first - v1[j].first)>0) && ((v1[i].second - v1[j].second)<0))
                {
                    flag = false;
                    break;
                }
                else if(((v1[i].first - v1[j].first)<0) && ((v1[i].second - v1[j].second)>0))
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            sort(v1);
            string s1="";
            int x=0;
            int y=0;
            for(int i=0; i<n; i++)
            {
                if(v1[i].first>x)
                {
                    for(int j=0; j<v1[i].first-x; j++)
                    {
                        s1 += 'R';
                    }
                }
                int k = v1[i].first-x;
                x += k;
                if(v1[i].second>y)
                {
                    for(int j=0; j<v1[i].second-y; j++)
                    {
                        s1 += 'U';
                    }
                }
                int l = v1[i].second-y;
                y += l;

                if(v1[i].first==x && v1[i].second==y)
                {
                    continue;
                }
            }

            cout << s1 << endl;
        }


    }
}