#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size();
        vector<int>v;
        int k=0;
        int m=0;int u=0;
        for(int i=0;i<n;i++)
        {
                if(s[i]=='1')
                {
                    k++;
                    m++;
                }
                else
                {
                    u++;
                    v.push_back(k);
                    v.push_back(0);
                    k=0;
                }
        }
        v.push_back(k);
        int y=0;
        if(v[0]!='0' && v[v.size()-1]!='0' && u!=0)
        {
            y=v[0]+v[v.size()-1];
        }
        for(int i=0;i<v.size();i++)
        {
            y=max(y,v[i]);
        }
        if(n==m)
        {
            cout<<n*n<<endl;
        }
        else if(y%2==1)
        {
            cout<<pow(((y/2)+1),2)<<endl;
        }
        else
        {
            cout<<(y/2)*((y/2)+1)<<endl;
        }
    }
}