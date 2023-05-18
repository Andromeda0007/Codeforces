#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(const string lhs, const string rhs) 
{
   return lhs.length() < rhs.length();
}
signed main()
{
    int n, k;
    cin >> n >> k;
    vector<string> v1;
    
    for(int i=0; i<n; i++)
    {
        string x;
        cin >> x;
        v1.push_back(x);
    }

    string s1;
    cin >> s1;

    sort(v1.begin(), v1.end(), cmp);

    vector<int> v2;

    for(int i=0; i<v1.size(); i++)
    {
        string s = v1[i];
        int m = s.size();
        v2.push_back(m);
    }

    vector<int> v3 = v2;

    reverse(v3.begin(), v3.end());

    auto it1 = find(v2.begin(),v2.end(), s1.size());
    auto it2 = find(v3.begin(),v3.end(), s1.size());

    int a = it1 - v2.begin()+1;
    int b = it2 - v3.begin();

    int c = a/k;
    int d = (n-b)/k;
    int e = a%k;
    int f = (n-b)%k;

    int ans1, ans2;

    ans1 = a + c*5;
    ans2 = n-b + d*5;
    if(e==0)
    {
        ans1 -= 5;
    }

    if(f==0)
    {
        ans2 -= 5;
    }



    cout << ans1 << " " << ans2 << endl;

}
