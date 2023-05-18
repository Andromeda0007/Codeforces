#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n, m;
    cin >> n >> m;

    int t = (n-m+1)*(n-m);
    int max = t/2;
    int min = 0;

    int k = n/m;
    n = n%m;
    int y = m-n;
    min = y*(k*(k-1)/2);
    min += (k*(k+1)/2)*n;
    
    cout << min << " " << max;
}
