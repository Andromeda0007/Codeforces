#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v1;
    int count=n;
    set<int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for(int i=0; i<v1.size(); i++)
    {
        sort(v1.begin(), v1.begin()+i);

        if(v1[i]!=count)
        {
            cout << endl;
        }
        else
        { 
            cout << count;
            int nount=0;
            for(int j=i-1; j>=0; j--)
            {
                if(v1[j]==count-1)
                {
                    cout << " " << v1[j];
                    count--;
                    nount++;
                }
                else
                {
                    break;
                }
            }

        }

        cout << "size: " << v1.size() << endl;

        for(int i=0; i<v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
}