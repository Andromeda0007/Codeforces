#include <bits/stdc++.h>
using namespace std;
#define IO_FAST             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)        for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)     for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)            sort(v1.begin(), v1.end())
#define reverse(v1)         reverse(v1.begin(), v1.end())
#define deb(x)              cout << #x <<  " = " << x << endl;
#define pb  push_back
#define mp  make_pair
signed main()
{
    IO_FAST
    vector<string> v;
    int t = 1;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        int arr[26]={};
        map<char,int> m1;

        for(int i=0; i<s1.size(); i++)
        {
            int index = int(s1[i])-97;
            arr[index]++;
            m1[s1[i]]++;
        }

        int count=0;
        for(int i=0; i<26; i++)
        {
            if(arr[i]%2==1)
            {
                count++;
            }
        }

        if(count>1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(m1.size()>=3)
            {
                cout << "YES" << endl;
            }
            else if(m1.size()==1)
            {
                cout << "NO" << endl;
            }
            else if (m1.size()==2)
            {
                if(count==0)
                {
                    cout << "YES" << endl;
                }
                else if(count==1)
                {
                    bool flag = true;
                    for(auto &value : m1)
                    {
                        if(value.second==1)
                        {
                            cout << "NO" << endl;
                            flag = false;
                            break;
                        }
                    }
                    if(flag == true)
                    {
                        cout << "YES" << endl;
                    }
                    
                }
            }

        }
    }
}