#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string s1;
    cin >>s1;
    int k=0;
    vector<char>v1;
    for(int i=0; i<s1.size(); i++)
    {
        v1.push_back(s1[i]);
    }
    for(int i=97; i<=122; i++)
    {
        if(v1.size()==0)
        {
            break;
        }
        else if(int(v1[0])!=i)
        {
            k++;
            break;
        }

       int j=0;
       while(j<v1.size())
       {
           if(int(v1[j])==i)
           {
            v1.erase(v1.begin()+j);
           }
           else
           {
            j++;
           }
       }
    }
    (k>0)?cout<<"NO\n":cout<<"YES\n";
}