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
        vector<int> v1;
        inputvec(v1, n);
        sort(v1);

        if(n==2)
        {
            if(v1[0]==v1[1])
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            int count=0;

            if(n%2==1)
            {   
                for(int i=0; i<n/2; i++)
                {
                    if(v1[i]!=v1[n/2+i+1])
                    {
                        count++;
                    }
                }
            }
            else
            {
                for(int i=0; i<n/2; i++)
                {
                    if(v1[i]!=v1[n/2+i])
                    {
                        count++;
                    }
                }
            }
            

            int ans = n-2*count;
            cout << ans << endl;
        }

        
    }
}