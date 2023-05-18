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
        int n;
        cin >> n;
        vector<int> v;
        inputvec(v,n);

        vector<int> v1;
        vector<int> v2;

        for(int i=0; i<n; i++)
        {
            if((i+1)%2==0)
            {
                v2.push_back(v[i]);
                v1.push_back(0);
            }
            else
            {
                v1.push_back(v[i]);
                v2.push_back(0);
            }
        }
        for(int i=1; i<n; i++)
        {
            v1[i] += v1[i-1];
            v2[i] += v2[i-1];
        }

        int count1;
        int count2;
        int count=0;

        if((v1[v1.size()-1] - v1[0]) == (v2[v2.size()-1] - v2[0]))
        {
            count++;
        }
        if(v1[v1.size()-2] == v2[v2.size()-2])
        {
            count++;
        }

        for(int i=1; i<n-1; i++)
        {
            count1 = v1[i-1];
            count2 = v2[i-1];

            int k = v1[v1.size()-1] - v1[i];
            int l = v2[v2.size()-1] - v2[i];

            count1 += l;
            count2 += k;

            if(count1==count2)
            {
                count++;
            }
        }

        cout << count << endl;


    }
}