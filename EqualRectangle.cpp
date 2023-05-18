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
        n = n*4;

        vector<int> v1;
        map<int,int> m1;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v1.pb(x);
            m1[x]++;
        }
        
        bool flag=true;
        
        for(auto &value :m1)
        {
            if(value.second % 2==1)
            {
                flag = false;
                break;
            }
        }
        
        sort(v1);
        int temp =v1[0]*v1[n-1];
        
        for(int i=0; i<n; i++)
        {
            if(v1[i] *v1[n-i-1] != temp)
            {
                flag = false;
            }    
        }
        
        (flag)? cout << "YES\n" : cout << "NO\n";
  
    }
}