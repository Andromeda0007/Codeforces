#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        int count = 0;
        int count1 =0;

        for(int i=0; i<n; i++)
        {
            cin >> v1[i];
            if(v1[i]==0)
            {
                count++;
            }
            if(v1[i]==1)
            {
                count1++;
            }
        }

        if(v1[0]==0)
        {
            cout << "Bob" << endl;
        }  
        else if(count>0)
        {
            cout << "Alice" << endl;
        }   
        else
        {
            int times=0;
            int i=0;
            while(times!=1)
            {
                i++;

                v1[0] -= 1;
                if(v1[0]==0)
                {
                    times++;
                }

                int k = *max_element(v1.begin()+1, v1.end());
                auto it = lower_bound(v1.begin()+1, v1.end(), k);
                int pos = it - v1.begin();
                swap(v1[0], v1[pos]);
                
                for(int i=0; i<n; i++)
                {
                    cout << v1[i] << " ";
                }
                cout << endl;

                if(times==1) break;

            }
            i+=1;
            cout << "i:" << i << endl;

            if(i%2==1)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }  
    }
    
}