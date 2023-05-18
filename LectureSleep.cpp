#include <bits/stdc++.h>
using namespace std;
#define int long long
#define printvec(v1)   for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
signed main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v1;
    vector<int> v2(n,0);
    vector<int> v;
    int total=0;

    for(int i=0; i<n ;i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0; i<n ;i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            total += v1[i];
        }
        else
        {
            v2[i] += v1[i];
        }
    }
    
    int sum=0;
    for(int i=0; i<k; i++)
    {
        sum+= v2[i];
    }


    v.push_back(sum);
    int max=sum;
    
    for(int i=k; i<n; i++)
    {
        sum += v2[i];
        sum -= v2[i-k];
        v.push_back(sum);
        if(sum>max)
        {
            max = sum;
        }
    }

    printvec(v2);
    printvec(v);

    cout << total + max << endl;
}