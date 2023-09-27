#include <bits/stdc++.h>

using namespace std;

int main()
{
	 int n, m, a, b;
	 cin >> n >> m >> a >> b;

	 int ans;

     if(m * a <= b)
        ans = n * a;

     else
     {
         int mn = min((n % m) * a, b);
         ans = (n / m) * b + mn;
     }


	cout << ans;

	return 0;
}
