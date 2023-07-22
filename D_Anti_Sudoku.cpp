#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testcase                int t; cin >> t; while(t--)
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
vector<int> primefactors; // Does the primefactorisation of a number;
void factorize(int n)     
{
	while(n%2==0)   primefactors.pb(2),   n = n/2;
	for(int i=3; i<=sqrt(n); i=i+2)   while(n%i==0)   primefactors.pb(i),  n = n/i;
	if(n>2) primefactors.pb(n);
}
//================================================================================================================//
vector<int> divisors; // Gives me all the different factors.
void factors(int n)
{
    for(int i=1; i<=n; i++){ if(n%i==0)  divisors.pb(i);}
}
//================================================================================================================//
vector<vector<int>> subsets;  // To Generate all the subsets of a vector;
void generatesubset(vector<int> &subset, int i, vector<int> v1)
{
    if(i==v1.size()) {subsets.pb(subset); return;}
    generatesubset(subset, i+1, v1);  // Inputvec(v1, n);
    subset.pb(v1[i]);  generatesubset(subset, i+1, v1);   subset.pop_back();
}
// signed main(){
//     int n;cin >> n;vector<int> v1;inputvec(v1, n);vector<int> subset;generatesubset(subset, 0, v1);
//     for(auto &subset : subsets){for(auto &elements : subset){ cout << elements << " ";}cout << endl;}}
//================================================================================================================//
void generatesubseq(string s1, string ans) // To generate all the subsequence of a string
{if(s1.size()==0){cout << ans << endl;  return;}    char c1 = s1[0];    string rest = s1.substr(1);
generatesubseq(rest, ans);  generatesubseq(rest, ans+c1);}
// generatesubseq(s1, ""); -->  Inside Signed main()
//================================================================================================================//
string binary(int a)  // convert a decimal number to binary number
{   
    string s1 = "";
    int mask = 1;
    for(int i=0; i<31; i++) { if((mask&a) >= 1)   s1 = "1"+s1; else    s1 = "0"+s1;  mask<<=1;}
    int count=0;
    for(int i=0; i<s1.size(); i++){ if(s1[i]!='1')  count++; else    break;} s1.erase(0, count);
    return s1;
}
//================================================================================================================//
signed main()
{
    IO_FAST
    testcase
    {
        vector<vector<char>> v;

        for(int i=0; i<9; i++)
        {
            vector<char> v1;
            for(int j=0; j<9; j++)
            {
                char c1;
                cin >> c1;
                v1.pb(c1);
            }
            v.pb(v1);
        }

        char c1 = v[0][0];
        char c2 = v[1][4];
        char c3 = v[2][8];
        char c4 = v[3][1];
        char c5 = v[4][5];
        char c6 = v[5][6];
        char c7 = v[6][2];
        char c8 = v[7][3];
        char c9 = v[8][7];

        int a1 = c1 -'0';
        int a2 = c2 -'0';
        int a3 = c3 -'0';
        int a4 = c4 -'0';
        int a5 = c5 -'0';
        int a6 = c6 -'0';
        int a7 = c7 -'0';
        int a8 = c8 -'0';
        int a9 = c9 -'0';

        a1++;  if(a1==10) a1=1;
        a2++;  if(a2==10) a2=1;
        a3++;  if(a3==10) a3=1;
        a4++;  if(a4==10) a4=1;
        a5++;  if(a5==10) a5=1;
        a6++;  if(a6==10) a6=1;
        a7++;  if(a7==10) a7=1;
        a8++;  if(a8==10) a8=1;
        a9++;  if(a9==10) a9=1;


        c1 = a1 + '0';
        c2 = a2 + '0';
        c3 = a3 + '0';
        c4 = a4 + '0';
        c5 = a5 + '0';
        c6 = a6 + '0';
        c7 = a7 + '0';
        c8 = a8 + '0';
        c9 = a9 + '0';
        
        v[0][0] = c1;
        v[1][4] = c2;
        v[2][8] = c3;
        v[3][1] = c4;
        v[4][5] = c5;
        v[5][6] = c6;
        v[6][2] = c7;
        v[7][3] = c8;
        v[8][7] = c9;

        
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cout << v[i][j];
            }
            cout << endl;
        }

        

    }
    
}


