#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll dp[100005];
ll freq[100005];

int main()
{
    int n;
	cin >> n;

	int a[n];
	int mx = 0;
	for(int i = 0; i < n; i++)
    {
		cin >> a[i];

		freq[a[i]]++;

		mx = max(mx, a[i]);
	}

	dp[1] = freq[1];
	for(int i = 2; i <= mx; i++)
		dp[i] = max((dp[i - 2] + (freq[i] * i)), dp[i - 1]);

	cout << dp[mx];

	return 0;
}
