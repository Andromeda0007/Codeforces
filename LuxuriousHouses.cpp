#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v1;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    reverse(v1.begin(), v1.end());
    
    vector<int> v2;

    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(v1[i]>max)
        {
            v2.push_back(0);
            max = v1[i];
        }
        else if(v1[i]==max)
        {
            v2.push_back(1);
            max = v1[i];
        }
        else
        {
            v2.push_back(max-v1[i]+1);
        }
    }

    reverse(v2.begin(), v2.end());

    for(int i=0; i<n; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}
