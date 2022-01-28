// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1/
#include <bits/stdc++.h>
using namespace std;

int find_neg(int low, int high, int arr[])
{
	for (int i = low; i < high; i++)
	{
		if (arr[i] < 0)
			return arr[i];
	}
	return 0;
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int k;
		cin >> k;
		for (int i = 0; i <= n - k; i++)
		{
			cout << find_neg(i, i + k, arr) << " ";
		}
		cout << endl;
	}
}
