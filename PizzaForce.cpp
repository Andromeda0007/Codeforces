#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int time=0;

        if(n%6==0)
        {
            int k = n/6;
            time += k*15;

        }
        else if(n%8==0)
        {
            int k = n/8;
            time += k*20;
        }
        else if(n%10==0)
        {
            int k = n/10;
            time += k*25;
        }
        else
        {
            int a = 6 - n%6;
            int b = 8 - n%8;
            int c = 10 - n%10;

            int k = min(a, min(b, c));

            if(k==a)
            {
                int t = n/6 + 1;
                time += t*15;
            }
            else if(k==b)
            {
                int t = n/8;
                time += t*20;

                if(n%8<=6)
                {
                    time += 15;
                }
                else
                {
                    time += 20;
                }
            }
            else
            {
                int t = n/10;
                time += t*25;
                if(n%10<=6)
                {
                    time += 15;
                }
                else if(n%10==7 || n%10==8)
                {
                    time += 20;
                }
                else
                {
                    time += 25;
                }
            }
        }

        cout << time << endl;
    }
}