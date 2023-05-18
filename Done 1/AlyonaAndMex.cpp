#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define sortgreater(v1)     sort(v1.begin(), v1.end(), greater<int>())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define pb  push_back
#define mp  make_paair
signed main()
{
    IO_FAST
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        inputvec(v1,n);
        sort(v1);

        int k=1;
        for(int i=0; i<n; i++)
        {
            if(v1[i]>k)
            {
                v1[i] = k;
            }

            if(v1[i]==k || v1[i]>k)
            {
                k++;
            }
        }

        set<int> s;

        for(int i=0; i<n; i++)
        {
            s.insert(v1[i]);
        }

        int ans;
        int num = 1;
        bool flag = false;
        for(auto &value: s)
        {
            if(value != num)
            {
                ans = num;
                flag = true;
                break;
            }
            num++;
        }

        if(flag == false)
        {
            ans = s.size()+1;
        }

        cout << ans << endl;

    }
}