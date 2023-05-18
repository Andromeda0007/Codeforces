#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if(n==1)
        {
            cout << 1 << endl;
        }
        else if (n==2)
        {
            cout << 2 << " " << 1 << endl;
        }
        else if (n%2==1)
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<int> v;
            v.push_back(n);
            v.push_back(n-1);

            int num1 = 2;
            int num2 = n-3;

            vector<int> v1;
            vector<int> v2;

            while(num2 > -1)
            {
                v1.push_back(num2);
                num2 -= 2;
            }

            while(num1 < n)
            {
                v2.push_back(num1);
                num1 += 2;
            }

            for(int i=0; i<v1.size(); i++)
            {
                v.push_back(v2[i]);
                v.push_back(v1[i]);
            }


            for(int i=0; i<v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;

        }
    }
}