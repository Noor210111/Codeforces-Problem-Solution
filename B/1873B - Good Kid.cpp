#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {

        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        long long mx = 0;

        for(int i = 0; i < n; i++)
        {
            long long mult = 1;
            a[i]++;
            for(int j = 0; j < n; j++)
            {
                mult *= a[j];
            }
            if(mult > mx) mx = mult;
            a[i]--;
            //cout << a[i] << " hi " << endl;
        }

        cout << mx << endl;
    }

    return 0;
}
