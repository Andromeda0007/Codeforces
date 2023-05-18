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

        int num = n*m;
        vector<int> v1;
        inputvec(v1,num);

        sort(v1);

        int k = v1[num-1]-v1[0];
        int l = v1[num-1]-v1[1];

        int a= v1[num-1]-v1[0];
        int b = v1[num-2]-v1[0];
        int sum = 0;

        int num1 = max(n, m);
        int num2 = min(n,m);

        if(k+l > a+b)
        {
            sum += (num1-1)*num2*k;
            sum += (num2-1)*l;

            cout << sum << endl;
        }
        else
        {
            sum += (num1-1)*num2*a;
            sum += (num2-1)*b;

            cout << sum << endl;
        }
        
    }
}