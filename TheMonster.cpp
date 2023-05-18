#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v1;
    v1.push_back(b);
    vector<int> v2;
    v2.push_back(d);

    int sum1=b;
    int sum2=d;
    for(int i=0; i<101; i++)
    {
        sum1 += a ;
        sum2 += c;
        v1.push_back(sum1);
        v2.push_back(sum2);
    }
    int ans;
    bool flag = false;
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            if(v1[i]==v2[j])
            {
                ans = v1[i];
                flag = true;
                break;
            }
            if(v2[j]>v1[i])
            {
                break;
            }
        }
        if(flag == true)
        {
            break;
        }
    }

    flag? cout << ans << "\n" : cout << "-1\n";


}