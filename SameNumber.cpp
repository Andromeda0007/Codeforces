#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        int total=0;
        if(s1.size()==1)
        {
            cout << s1 << endl;
        }
        else
        {
            int k = (s1.size()-1)*9;
            total += k;
            
            int num = stoi(s1);

            bool flag = true;

            for(int i=0; i<s1.size(); i++)
            {
                if((s1[i])-'0'!= (s1[0])-'0')
                {
                    flag = false;
                    break;
                }
            }
            if(flag == false)
            {
                if(s1[1]>)
                for(int i=0; i<s1.size(); i++)
                {
                    if(s1[i]!=s1[0])
                    break;

                    if(i==s1.size()-1)
                    {
                        flag = true;
                    }
                }
            }
            

            int first_num = num/(pow(10, s1.size()-1));

            if(flag ==true)
            {
                total += first_num;
            }
            else
            {
                total += first_num - 1;
            }

            cout << total << endl;
            }

        
    }
}