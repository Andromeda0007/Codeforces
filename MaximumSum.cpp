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
        int n, k;
        cin >> n >> k;
        vector<int> v1;
        vector<int> v2;
        int k1 = k;
        int k2=k;
        
        int sm=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.pb(x);
        }
        sort(v1);

        for(int i=0; i<n; i++)
        {
            sm+=v1[i];
            v2.pb(sm);
        }

        int sum1 = v2[v2.size()-1];
        int sum2 = 0;
        int sum3 = 0;

        int pos1=0;
        int pos2=n-1;
        int count1=0;
        int count2=0;


        while(k--)
        {
            if((v1[pos1]+v1[pos1+1])<v1[pos2])
            {
                count1++;
                pos1+=2;
            }
            else
            {
                count2++;
                pos2--;
            }
        }

        if(count1>0)
        {
            int pos = count1*2-1; 
            sum1 -= v2[pos];
        }
       
        
        int position=n-1;
        if(count2>0)
        {
            while(count2--)
            {
                sum1 -= v1[position];
                position--;
            }
        }
        int a1 = n-1-k1;
        sum2 += v2[a1];

        int a2 = 2*k2-1;
        sum3 += v2[n-1]-v2[a2];

        int ans = max(sum1, max(sum2, sum3));

        cout << ans << endl;
    }
}