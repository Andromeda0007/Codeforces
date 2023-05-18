#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    set<int> s;
    map<int,int> m1;
    int arr[6];
    
    for(int i=0; i<6; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
        m1[arr[i]]++;
    }
    
    bool pen = false;
    for(auto &value : m1)
    {
        if(value.second>=4)
        {
            pen = true;
        }
    }

    if(s.size()>=4 || pen==false)
    {
        cout << "Alien" << endl;
    }
    else if (s.size()==3)
    {
        cout << "Bear" << endl;
    }
    else if(s.size()==1)
    {
        cout << "Elephant" << endl;
    }
    else
    {
        bool flag = false;
        for(auto & value : m1)
        {
            if(value.second == 5)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "Bear" << endl;
        }
        else
        {
            cout << "Elephant" << endl;
        }
    }
}