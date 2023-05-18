#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int arr[26]={};

    for(int i=0; i<s1.size(); i++)
    {
        int index = int(s1[i]) - 97;
        arr[index]++;
    } 


    string s2 = "";

    for(int i=0; i<26; i++)
    {
        if(arr[i]>0)
        {
            for(int j=0; j<arr[i]; j++)
            {
                char c1 = char(i+97);
                s2 += c1;
            }
        }
    }

    cout << s2 << endl;
}