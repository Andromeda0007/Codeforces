#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testcases               int t; cin >> t; while(t--) 
#define inputvec(v1, n)         for(int i=0; i<n; i++) {int x; cin >> x; v1.pb(x);}
#define inputvecp(v1, n)        for(int i=0; i<n; i++) {int x, y; cin >> x >> y; v1.pb(mp(x,y));}
#define sort(v1)                sort(v1.begin(), v1.end())
#define reverse(v1)             reverse(v1.begin(), v1.end())
#define deb(x)                  cout << #x <<  " = " << x << endl;
#define count(v1, k)            count(v1.begin(), v1.end(), k);
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
vector<int> primefactors; // Does the primefactorisation of a number;
void factorize(int n)     
{
	while(n%2==0)   primefactors.pb(2),   n = n/2;
	for(int i=3; i<=sqrt(n); i=i+2)   while(n%i==0)   primefactors.pb(i),  n = n/i;
	if(n>2) primefactors.pb(n);
}
//================================================================================================================//
string binary(int a)  // convert a decimal number to binary number
{   
    string s1 = "";
    int mask = 1;
    for(int i=0; i<31; i++)
    {
        if((mask&a) >= 1)   s1 = "1"+s1; 
        else    s1 = "0"+s1;  
        mask<<=1;
    }
    int count=0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]!='1')  count++;
        else    break;
    }
    s1.erase(0, count);
    return s1;
}
//================================================================================================================//
vector<int> divisors; // Gives me all the different divisors.
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
    string s1;
    cin >> s1;

    if(n==1)
    {
        cout << 0 << endl;
        cout << s1 << endl;
    }
    else if(n==2)
    {
        if(s1[0]!=s1[1])
        {
            cout << 0 << endl;
            cout << s1 << endl;
        }
        else
        {
            cout << 1 << endl;
            if(s1[1]=='R')
            {
                s1[1]='G';
            }
            else if(s1[1]=='G')
            {
                s1[1]='B';
            }
            else if(s1[1]=='B')
            {
                s1[1]='R';
            }

            cout << s1 << endl;
        
        }
    }
    else
    {
        vector<pair<char,int>> v;

        for(int i=0; i<n; i++)
        {
            char c1 = s1[i];
            int a = (i+1)%3;
            if(a==0)
            {
                a=3;
            }
            v.pb(mp(c1, a));
        }

        int countR1=0, countR2=0, countR3=0, countG1=0, countG2=0, countG3=0,countB1=0, countB2=0, countB3=0;

        for(int i=0; i<n; i++)
        {
            if(v[i].first=='R' && v[i].second==1)
            {
                countR1++;
            }
            else if(v[i].first=='R' && v[i].second==2)
            {
                countR2++;
            }
            else if(v[i].first=='R' && v[i].second==3)
            {
                countR3++;
            }
            else if(v[i].first=='G' && v[i].second==1)
            {
                countG1++;
            }
            else if(v[i].first=='G' && v[i].second==2)
            {
                countG2++;
            }
            if(v[i].first=='G' && v[i].second==3)
            {
                countG3++;
            }
            else if(v[i].first=='B' && v[i].second==1)
            {
                countB1++;
            }
            else if(v[i].first=='B' && v[i].second==2)
            {
                countB2++;
            }
            else if(v[i].first=='B' && v[i].second==3)
            {
                countB3++;
            }
        }

        int maxm = 0;
        char c1, c2, c3;
        int k = countR1+countG2+countB3;
        if(k>maxm)
        {
            maxm = k;
            c1 = 'R',   c2 = 'G',   c3 = 'B';
        }

        k = countR1+countB2+countG3;
        if(k>maxm)
        {
            maxm = k;
            c1 = 'R',   c2 = 'B',   c3 = 'G';
        }

        k = countG1+countB2+countR3;
        if(k>maxm)
        {
            maxm= k;
            c1 = 'G',   c2 = 'B',   c3 = 'R';
        }

        k = countG1+countR2+countB3;
        if(k>maxm)
        {
            maxm = k;
            c1 = 'G',   c2 = 'R',   c3 = 'B';
        }

        k = countB1+countG2+countR3;
        if(k>maxm)
        {
            maxm = k;
            c1 = 'B',   c2 = 'G',   c3 = 'R';
        }

        k = countB1+countR2+countG3;
        if(k>maxm)
        {
            maxm = k;
            c1 = 'B',   c2 = 'R',   c3 = 'G';
        }

        int count=0;
        for(int i=0; i<s1.size(); i++)
        {
            if((i+1)%3==1 && s1[i]!=c1)
            {
                s1[i]=c1;
                count++;
            }
            else if((i+1)%3==2 && s1[i]!=c2)
            {
                s1[i]=c2;
                count++;
            }
            else if((i+1)%3==0 && s1[i]!=c3)
            {
                s1[i]=c3;
                count++;
            }
        }

        cout << count << endl;
        cout << s1 << endl;

    }   
}
