#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> v1;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        if(v1[i] > b)
        {
            v1[i]=0;
        }
    }

    int count = 0;
    int sum = 0;

    for(int i=0; i<v1.size(); i++)
    {
        sum += v1[i];

        if(sum > d)
        {
            count++;
            sum = 0;
        }
    }

    cout << count << endl;

}