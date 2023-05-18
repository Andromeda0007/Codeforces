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
    int t=1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        inputvec(v1, n);
        vector<char> v2;

        char c1 = 'a';
        int count=0;

        for(int i=0; i<n; i++)
        {
            if(v1[i]==3)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count>0)
        {
            if(v1[count]==1)
            {
                if(count%2==0)
                {
                    c1 = 's';
                }
                else
                {
                    c1 = 'c';
                }
            }
            else if(v1[count]==2)
            {
                if(count%2==0)
                {
                    c1 = 'c';
                }
                else
                {
                    c1 = 's';
                }
            }
        }

        for(int i=0; i<n; i++)
        {   
            if(v1[i]==0)
            {
                v2.pb('o');
            }
            else if(v1[i]==1)
            {
                if(c1=='c')
                {
                    v2.pb('o');
                    c1 = 'o';
                }
                else
                {
                    v2.pb('c');
                    c1 = 'c';
                }
            }
            else if(v1[i]==2)
            {
                if(c1=='s')
                {
                    v2.pb('o');
                    c1 = 'o';
                }
                else
                {
                    v2.pb('s');
                    c1 = 's';
                }
            }
            else if(v1[i]==3)
            {
                if(c1=='c')
                {
                    v2.pb('s');
                    c1 = 's';
                }
                else
                {
                    v2.pb('c');
                    c1 = 'c';
                }
            }
        }

        deb(count);
        printvec(v2);

        int count1=0;
        for(int i=0; i<n; i++)
        {
            if(v2[i]=='o')
            {
                count1++;
            }
        }

        cout << count1 << endl;
    }
}