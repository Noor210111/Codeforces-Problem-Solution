#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long ans = 0;
    for(long long i = 0; i * a <= n; ++i)
        for(long long j = 0; i * a + j * b <= n; ++j)
        {
                long long rem = n - i * a - j * b;
                if(rem % c == 0)
                {
                    long long k = rem / c;
                    ans = max(ans, i + j + k);
                }
        }

    cout << ans << endl;

    return 0;
}
