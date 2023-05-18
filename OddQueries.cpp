#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() 
{
	int t = 1;
	cin >> t;
	while (t--) 
    {
	 	int n, q;
	 	cin >> n >> q;
	 	vector<int> v1(n), v2(n+2), v3(n+2);

	 	for (int i = 0; i < n; i++) 
        {
	 		cin >> v1[i];
	 	}

	 	v2[1] = v1[0];
	 	v3[n] = v1[n - 1];

	 	for (int i = 2; i < n; i++) 
        {
	 		v2[i] = v2[i-1] + v1[i-1];
	 	}

	 	for (int i = n - 1; i > 0; i--) 
        {
	 		v3[i] = v3[i+1] + v1[i-1];
	 	}

	 	for (int i = 0; i < q; i++) 
        {
	 		int l, r, k;
	 		cin >> l >> r >> k;
	 		int sum = v2[l-1] + (r-l+1) * k + v3[r+1];
	 		if (sum&1) cout << "YES\n";
	 		else cout << "NO\n";
	 	}
	}
}