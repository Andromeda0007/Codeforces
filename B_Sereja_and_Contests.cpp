#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printvec(v1)            for(int i=0; i<v1.size(); i++){cout << v1[i] << " ";} cout << endl;
#define inputvec(v1, n)         for(int i=0; i<n; i++) {int x; cin >> x; v1.push_back(x);}
#define sort(v1)                sort(v1.begin(), v1.end())
#define reverse(v1)             reverse(v1.begin(), v1.end())
#define deb(x)                  cout << #x <<  " = " << x << endl;
#define tolower(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define remove_char(s1, a)      s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end())  // does not work!
#define upperbound(v1, k)       upper_bound(v1.begin(), v1.end(), k)
#define lowerbound(v1, k)       lower_bound(v1.begin(), v1.end(), k)
int gcd(int a,int b)            { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)            { return a/gcd(a,b)*b; }  // take a = v[0];
signed main()
{
    IO_FAST
    vector<string> v;

    int n, k;
    cin >> n >> k;
    int arr[n];
    arr[0]=-1;

    for(int i=1; i<n; i++)
    {
        arr[i]=1;
    }
    while(k--)
    {
        int a;
        cin >> a;

        if(a==1)
        {
            int b, c;
            cin >> b >> c;
            arr[b]--;
            arr[c]--;
        }
        else
        {
            int b;
            cin >> b;
            arr[b]--;
        }
    }

    vector<int> v1;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            v1.pb(i);
            count++;
        }
    }

    int ans1=0;
    if(v1.size()==0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else if(v1.size()==1)
    {
        cout  << 1 << " " << 1 << endl;
    }
    else
    {
        for(int i=0; i<v1.size()-1; i++)
        {
            if(v1[i+1]-v1[i]==1)
            {
                ans1++;
                i++;
            }
            else
            {
                ans1++;
            }
            if(i==v1.size()-2)
            {
                ans1++;
            }
        }

        cout << ans1 << " " << count << endl;
    }

}


