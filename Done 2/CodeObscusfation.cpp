#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(const string lhs, const string rhs)
{
    return lhs.length() < rhs.length();
}
signed main()
{
    int n;
    cin >> n;
    vector<string> v1;


    for(int i=0; i<n; i++)
    {
        string s1;
        cin >> s1;
        v1.push_back(s1);
    }

    sort(v1.begin(), v1.end(), cmp);

    for(auto &value : v1)
    {
        cout << value << " ";
    }
    cout << endl;
}