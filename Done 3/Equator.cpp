#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v1;

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        v1.push_back(sum);
    }

    int number = v1[v1.size()-1];
    int num;

    if(number%2==0)
    {
        num = number/2;
    }
    else
    {
        num = number/2 + 1;
    }

    auto it = lower_bound(v1.begin(), v1.end(), num);

    int pos = it - v1.begin();

    cout << pos+1 << endl;

}