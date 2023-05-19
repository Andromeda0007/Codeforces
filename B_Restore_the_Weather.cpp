#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t--)
    {
		vector<pair<int,int>> arr;
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n;i++)
        {
			int a;
            cin >> a;
			arr.push_back(make_pair(a,i));
		}
		sort(arr.begin(),arr.end());

        vector<int>arrb;
        for(int i=0;i<n;i++)
        {
			int b;
            cin >> b;
            arrb.push_back(b);
		}
        sort(arrb.begin(), arrb.end());

		for(int i=0;i<n;i++)
        {
			arr[i].first = arrb[i];
		}
        vector<pair<int,int>> v1;

        for(auto & value: arr)
        {
            v1.push_back(make_pair(value.second, value.first));
        }

        sort(v1.begin(), v1.end());

        for(auto & value: v1)
        {
            cout << value.second << " ";
        }
        cout << endl;

	}
}