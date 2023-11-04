#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if(k > n || (k - 1) > x)
        {
            cout << -1 << endl;
            //break;
        }
        else
        {
            //int a = 0;
            int sum = 0;
            for(int i = 0; i < k; i++)
            {
                sum += i;
                n--;
            }
            int mx = x;
            if(mx == k) mx--;
            while(n--)
                sum += mx;

            cout << sum << endl;
        }
    }

    return 0;
}
