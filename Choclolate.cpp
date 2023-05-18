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
        int count1=0;
        int count0=0;

        vector<int> v1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.pb(x);
            if(x==1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        
        if(count0==n)
        {
            cout << 0 << endl;
        }
        else if(count1==0 || count1==n || count1==1)
        {
            cout << 1 << endl;
        }
        else
        {

            vector<int> v2;
            int pos1, pos2;
            int times=0;

            for(int i=0; i<n; i++)
            {
                if(v1[i]==1 && times==0)
                {
                    pos1 = i;
                    times++;
                }
                else if(v1[i]==1 && times==1)
                {
                    pos2 = i;
                    v2.pb(pos2-pos1);
                    pos1 = pos2;
                }
            }

            int total=1;
            for(int i=0; i<v2.size(); i++)
            {
                total *= v2[i];
            }

            cout << total << endl;
        }
        
    }
}