#include <bits/stdc++.h>
using namespace std;
#define int   long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {   
        char arr[8][8];

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin >> arr[i][j];
            }
        }

        bool flag = false;

        for(int i=0; i<8; i++)
        {
            set<char> s;

            if(arr[i][0] != '.')
            {
                for(int j=0; j<8; j++)
                {
                    s.insert(arr[i][j]);
                }

                if(s.size()==1)
                {
                    flag = true;
                    break;
                }
                
                s.erase(s.begin(), s.end());
                
            }
            
            
        }

        flag? cout << "R\n" : cout << "B\n"; 
    }
}