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
        int n, m;
        cin >> n >> m;
        vector<int> v1;
        int sum=0;

        for(int i=1; i<=10; i++)
        {
            int k = m*i;
            string s1 = to_string(k);
            int num = k%10;
            sum += num;
            v1.pb(num);
        }

        if(n<=10*m)
        {
            int k = n/m;
            int sum1=0;
            for(int i=0; i<k; i++)
            {
                sum1 += v1[i];
            }

            cout << sum1 << endl;
        }
        else
        {
            int k = (n/m)/10;
            int l = (n/m)%10;

            int ans = k*sum;
            
            for(int i=0; i<l; i++)
            {
                ans += v1[i];
            }

            cout << ans << endl;
        }
    }
}