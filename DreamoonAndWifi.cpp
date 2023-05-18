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
double fact(int n)
{
    int k=1;

    for(int i=1; i<=n; i++)
    {
        k *= i;
    }
    return k;
}
signed main()
{
    IO_FAST
    vector<string> v;
    int t = 1;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int sum1=0;
        int sum2=0;
        int count=0;

        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='+')
            {
                sum1++;
            }
            else if(s1[i]=='-')
            {
                sum1--;
            }
        }

        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]=='+')
            {
                sum2++;
            }
            else if(s2[i]=='-')
            {
                sum2--;
            }
            else
            {
                count++;
            }
        }
        
        if(abs(sum1-sum2)==count)
        {
            double k = 1;
            double l = pow(2, count);

            double ans = k/l;
            cout << setprecision(12) << ans << endl;
        }
        else if(abs(sum1-sum2)>count)
        {
            cout << setprecision(12) << 0 <<  endl;
        }
        else if(count%2==0 && abs(sum1-sum2)%2==1)
        {
            cout << setprecision(12) << 0 << endl;
        }
        else if(count%2==1 && abs(sum1-sum2)%2==0)
        {
            cout << setprecision(12) << 0 << endl;
        }
        else
        {
            double a, b;
            count;

            a = abs((abs(sum1-sum2) + count)/2);
            b = abs((abs(sum1-sum2) - count)/2);

            double k = ((fact(count)/ (fact(a)*fact(b)))/pow(2, count));

            cout << setprecision(12) << k << endl;
        }

    }
}