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
        string s1 = "codeforces";

        string s2;
        cin >> s2;
        int count=0;

        for(int i=0; i<10; i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }

        cout << count << endl;

    }
}