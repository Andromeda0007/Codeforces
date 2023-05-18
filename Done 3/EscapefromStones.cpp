#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<vector>
#include<deque>
#include<utility>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
 
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main()
{
    fastIO();
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'r') cout << i + 1 << "\n";
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'l') cout << i + 1 << "\n";
    }
}