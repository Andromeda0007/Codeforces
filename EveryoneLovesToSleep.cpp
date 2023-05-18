#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        pair<int,int> p;
        p = make_pair(H, M);

        vector<pair<int,int>> v1;

        for(int i=0; i<n; i++)
        {
            int h, m;
            cin >> h >> m;
            v1.push_back(make_pair(h,m));
        }

        sort(v1.begin(), v1.end());

        pair<int, int> p1 = v1[0];
        pair<int, int> p2 = v1[v1.size()-1];

        pair<int,int> ans;
        if(p>p2)
        {

            int a = 23 - p.first;
            int b = 60 - p.second;

            ans.first = p1.first + a;
            ans.second = p1.second + b;
            if(ans.second>=60)
            {
                ans.first += 1;
                ans.second -= 60;
            }
        }
        else
        {
            for(int i=0; i<v1.size(); i++)
            {
                if(v1[i]>=p)
                {
                    ans.first = v1[i].first - p.first;
                    ans.second = v1[i].second - p.second;

                    if(ans.second < 0)
                    {
                        ans.first -= 1;
                        ans.second += 60;
                    }
                    break;
                }
            }
        }

        cout << ans.first << " " << ans.second << endl;

    }

}