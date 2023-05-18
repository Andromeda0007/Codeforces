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
        int count1=0;
        vector<int> v1;
        int c = -1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x!=c)
            {
                v1.pb(x);
                c=x;
            }
            else
            {
                count1++;
            }
        }


        if(v1.size()==1)
        {
            cout << 1 << endl;
        }
        else
        {
            int i=0;
            int count=0;
            while(i!=v1.size()-1)
            {
                int k = v1[i];
                if(k-v1[i+1]>=0)
                {
                    for(int j=i+1; j<v1.size()-1; j++)
                    {
                        if(v1[j]>=v1[j+1])
                        {
                            count++;
                            i++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    i++;
                }
                else if(k-v1[i+1]<=0)
                {
                    for(int j=i+1; j<v1.size()-1; j++)
                    {
                        if(v1[j]<=v1[j+1])
                        {
                            count++;
                            i++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    i++;
                }
                else
                {
                    i++; 
                }

            }

            cout << n-count-count1 << endl;
        
        }


    }
}