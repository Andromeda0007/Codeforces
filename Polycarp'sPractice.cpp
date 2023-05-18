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
    int t = 1;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v1;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.pb(mp(x, i+1));
        }
        sort(v1);
        reverse(v1);

        int sum = 0;
        vector<int> v2;
        for(int i=0; i<k; i++)
        {
            sum += v1[i].first;
        }

        for(int i=0; i<k; i++)
        {
            v2.push_back(v1[i].second);
        }


        cout << sum << endl;

        sort(v2);
        v2.pop_back();
        v2.push_back(n);

        cout << v2[0] << " ";
        int sum1 = v2[0];
        for(int i=1; i<v2.size(); i++)
        {
            cout << v2[i]-v2[i-1] << " ";
        }
    }  
}