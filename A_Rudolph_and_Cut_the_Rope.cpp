#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define pb  push_back
#define mp  make_pair
#define IO_FAST                 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testcase                int t; cin >> t; while(t--)
#define inputvec(v1, n)         for(int i=0; i<n; i++) {int x; cin >> x; v1.pb(x);}
#define inputvecp(v1, n)        for(int i=0; i<n; i++) {int x, y; cin >> x >> y; v1.pb(mp(x,y));}
#define sort(v1)                sort(v1.begin(), v1.end())
#define reverse(v1)             reverse(v1.begin(), v1.end())
#define deb(x)                  cout << #x <<  " = " << x << endl;
#define print(x)                  cout << #x << endl;
#define tolower(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)             transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define remove_char(s1, a)      s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end())  // does not work!
#define upperbound(v1, k)       upper_bound(v1.begin(), v1.end(), k)
#define lowerbound(v1, k)       lower_bound(v1.begin(), v1.end(), k)
#define auto1(v1)               for(auto &value : v1) {cout << value << " ";} cout << endl;  
#define auto2(v1)               for(auto &value : v1) {cout << value.first << " " <<value.second << endl;} 
int gcd(int a,int b)            { if (b==0) return a; return gcd(b, a%b); } // take a=0;
int lcm(int a,int b)            { return a/gcd(a,b)*b; }  // take a = v[0];

const int N = 1e5+10;
vector<int> dp(N, -1);

//================================================================================================================//
vector<int> primefactors; // Does the primefactorisation of a number;
void factorize(int n)     
{
	while(n%2==0)   primefactors.pb(2),   n = n/2;
	for(int i=3; i<=sqrt(n); i=i+2)   while(n%i==0)   primefactors.pb(i),  n = n/i;
	if(n>2) primefactors.pb(n);
}
//================================================================================================================//
vector<vector<int>> generatevalue(const vector<vector<int>> &v) // TO generate all thevalues from a vectorofvector;
{if(v.empty()) {  return {{}};}
    vector<vector<int>> vr;
    for(int num : v[0]){
        vector<vector<int>> subvalue = generatevalue(vector<vector<int>>(v.begin() + 1, v.end()));
        for(const vector<int>& subset : subvalue){
            vector<int> currentSet = {num};
            currentSet.insert(currentSet.end(), subset.begin(), subset.end());
            vr.pb(currentSet);}}
    return vr;
     // vector<vector<int>> value = generatevalue(v);
}
//================================================================================================================//
vector<int> divisors; // Gives me all the different factors.
void factors(int n)
{
    for(int i=1; i<=n; i++){ if(n%i==0)  divisors.pb(i);}
}
//==============================================================================================================//
bool isSubsequence(string s1, string s2) // to check if string s1 is a subsequence of string s2;
{
    int i=0, j=0;
    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]) {i++;} j++;}
    return (i == s2.size());
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
        int n;
        cin >> n;
        int count=0;
        
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a>b)
            {
                count++;
            }
        }
        
        cout << count << endl;
    }
    
}

