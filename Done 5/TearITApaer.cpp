#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        
        int arr[26]={};

        for(int i=0; i<s1.size(); i++)
        {
            int index = int(s1[i]) - 97;
            arr[index]++;
        }
    }
}