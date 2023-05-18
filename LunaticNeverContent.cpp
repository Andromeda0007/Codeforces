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
        int count=0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.pb(x);
            if(x==0)
            {
                count++;
            }
        }

        if(count==n)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> v2;
            for(int i=0; i<n/2; i++)
            {
                int k = abs(v1[i] - v1[n-1-i]);
                v2.pb(k);
            }
            
            int count1=0;
            sort(v2);
            for(int i=0; i<v2.size(); i++)
            {
                if(v2[i]==0)
                {
                    count1++;
                }
            }
            
            else
            {

            }
            v2.erase(v2.begin(), v2.begin()+count1);


            if(count==n)
            {
                cout << 0 << endl;
            }
            else
            {
                bool flag = true;
                for(int i=0; i<v2.size(); i++)
                {
                    if(v2[i]%v2[0] !=0)
                    {
                        flag = false;
                        break;
                    }
                }

                if(flag)
                {
                    cout << v2[0] << endl;
                }
                else
                {
                    cout << 1 << endl;
                }

            }

        }
        
    }
}