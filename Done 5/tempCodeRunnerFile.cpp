#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;

signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;		
    // cin >> testcases ;
    while( testcases -- )	
    {
		
    	int n ;
		cin >> n ;
		int ans = 0 , x = 3 ;
		int arr[n];

		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			
			if(i%2==0)
			{
				cout << "yes:" << i << endl;
				if(arr[i] == 1 || arr[i] == 2)
				{
					arr[i] = 3 - arr[i] ;
				}
			}
			x &= arr[i] ;
			if(x == 0)
			{
				x = 3 ;
				ans++ ;
			}
		}
		
		for(int i=0; i<n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << ans ;
		}
		return 0 ;
} 