#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v[i]=arr[i];
    }
    vector<int>v2;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=v[v.size()-1])
        {
            cout<<" \n";
            v2.push_back(arr[i]);
            for(int j=0;j<v.size();j++)
            {
                if(v[j]==arr[i])
                {
                    v.erase(v.begin()+j);
                    break;
                }
            }
        }
        else
        {
            v2.push_back(v[v.size()-1]);
            v.erase(v.begin()+v.size()-1);
            for(int j=v2.size()-1;j>=0;j--)
            {
                cout<<v2[j]<<" ";
            }
            cout<<endl;
            v2.clear();
        }

    }
    
}