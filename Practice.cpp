#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> powerset;
void generate(vector<int> subset, int i, vector<int> v1)
{
    if(i==v1.size())
    {
        powerset.push_back(subset);
        return;
    }

    generate(subset, i+1, v1);

    subset.push_back(v1[i]);
    generate(subset, i+1, v1);
    subset.pop_back();
}
signed main()
{
    int n;
    cin >> n;
    vector<int> v1(n);

    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
    }

    vector<int> subset;

    generate(subset, 0, v1);

    for(auto & subset: powerset)
    {
        for(auto & elements: subset)
        {
            cout << elements << " ";
        }
        cout << endl;
    }
}