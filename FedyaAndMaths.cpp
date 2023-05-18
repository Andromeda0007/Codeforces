#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    string s1;
    cin >> s1;
    int k;
    if(s1.size()>=2)
    {
        char c1 = s1[s1.size()-2];
        char c2 = s1[s1.size()-1];

        int x = c1 - '0';
        int y = c2 - '0';
        k = x*10 + y;
    }
    else
    {
        char c1 = s1[0];
        int x = c1 - '0';
        k = x;
    }
    

    int num=1;

    int a = k%4;
    if(a==0)   num += 7;
    else if (a==1)  num+=5;
    else if (a==2)  num+=13;
    else if (a==3)  num+=15;

    if(k%2==0) num+=6;
    else  num+=4; 

    cout << num%5 << endl;


    
}