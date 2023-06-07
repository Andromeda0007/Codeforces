#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define inputvec(v1, n)        for(int i=0; i<n; i++) {int x; cin >> x; v1.pb(x);}
#define inputvecp(v1, n)        for(int i=0; i<n; i++) {int x, y; cin >> x >> y; v1.pb(mp(x,y));}
#define sort(v1)                sort(v1.begin(), v1.end())
#define reverse(v1)             reverse(v1.begin(), v1.end())
#define deb(x)                  cout << #x <<  " = " << x << endl;
#define tolower(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define remove_char(s1, a)      s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end())  // does not work!
#define upperbound(v1, k)       upper_bound(v1.begin(), v1.end(), k)
#define lowerbound(v1, k)       lower_bound(v1.begin(), v1.end(), k)
#define auto1(v1)               for(auto &value : v1) {cout << value << " ";} cout << endl;  
#define auto2(v1)               for(auto &value : v1) {cout << value.first << " " <<value.second << endl;} 
int gcd(int a,int b)            { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)            { return a/gcd(a,b)*b; }  // take a = v[0];

//================================================================================================================//
vector<int> primefactors;
void factorize(int n)     
{
	while(n%2==0)   primefactors.pb(2),   n = n/2;
	for(int i=3; i<=sqrt(n); i=i+2)   while(n%i==0)   primefactors.pb(i),  n = n/i;
	if(n>2) primefactors.pb(n);
}
//================================================================================================================//
vector<int> divisors;
void factors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)  divisors.pb(i);       
    }
}
//================================================================================================================//
signed main()
{
    IO_FAST

    int n;
    cin >> n;
    vector<int> v1;
    inputvec(v1, n);
    sort(v1);

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += v1[i];
    }
    int dum = sum;

    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        auto it = lowerbound(v1, a);
        int pos = it - v1.begin();

        int position;
        int ans1;
        int ans2;
        
        if(*it == a) 
        {
            position = pos;
            ans1=0;

            sum -= v1[position];
            ans2 = b-sum;
            if(ans2<0)
            {
                ans2=0;
            }

            cout << ans1+ans2 << endl;
            sum = dum;
        }  
        else if(pos==0)
        {
            position = 0;
            ans1 = 0;

            sum -= v1[position];

            ans2 = b-sum;
            if(ans2<0)
            {
                ans2=0;
            }

            cout << ans1+ans2 << endl;
            sum = dum;
        }   
        else if(pos == n)
        {
            position = n-1;
            ans1 = abs(a-v1[n-1]);
            sum -= v1[position];

            ans2 = b-sum;
            if(ans2<0)
            {
                ans2=0;
            }

            cout << ans1+ans2 << endl;
            sum = dum;
        }   
        else
        {
            int position = pos;

            int k, l;

            if(position == pos)
            {
                ans1 = 0;
                sum -= v1[position];

                ans2 = b-sum;
                if(ans2<0)
                {
                    ans2=0;
                }
                sum = dum;

                k = ans1+ans2;
            }

            position = pos-1;

            if(position == pos-1)
            {
                ans1 = a-v1[position];
                sum -= v1[position];

                ans2 = b-sum;
                if(ans2<0)
                {
                    ans2=0;
                }

                sum = dum;
                l = ans1 + ans2;
            }

            int ans = min(k, l);
            cout << ans << endl;

        }

	}
    
}
