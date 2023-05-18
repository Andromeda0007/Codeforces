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
        vector<pair<int, string>> v1;
        int sum=0;
        bool flag = true;

        for(int i=0; i<n; i++)
        {
            int x;
            string s1;
            cin >> x >> s1;

            if(sum<0 || sum>20000)
            {
                flag = false;
            }
            else
            {
                if(sum==0)
                {
                    if(s1=="South")
                    {
                        sum += x;
                    }
                    else
                    {
                        flag = false;
                    }
                }
                else if(sum==20000)
                {
                    if(s1=="North")
                    {
                        sum -= x;
                    }
                    else
                    {
                        flag = false;
                    }
                }
                else if(s1=="South")
                {
                    sum += x;
                }
                else if(s1=="North")
                {
                    sum -= x;
                }
            }
            
        }

        if(sum==0 && flag==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}