#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define sortgreater(v1)     sort(v1.begin(), v1.end(), greater<int>())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define upper_bound(v1, k)  upper_bound(v1.begin(), v1.end(), k);
#define lower_bound(v1, k)  lower_bound(v1.begin(), v1.end(), k);
#define pb  push_back
#define mp  make_pair
signed main()
{
    IO_FAST
    int t = 1;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v1;
        inputvec(v1, n);

        int count1=0;
        int count2=0;
        vector<int> v2;

        for(int i=0; i<n-1; i++)
        {
            if(v1[i]%2==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }

            if(count1==count2)
            {
                v2.push_back(abs(v1[i]-v1[i+1]));
            }
        }

        sort(v2);

        for(int i=1; i<v2.size(); i++)
        {
            v2[i] += v2[i-1];
        }

        auto it = upper_bound(v2, k);
        int ans = it-v2.begin();
        cout << ans << endl;

    }
}