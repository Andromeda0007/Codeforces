#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    int count=0;
 
    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
    }
 
    vector<int> v2=v1;

    sort(v2.begin(), v2.end());

    for(int i=0; i<n; i++)
    {
        if(v1[i]!=v2[i])
        {
            count++;
        }
    }
    
    if(count>2 || count==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }


}