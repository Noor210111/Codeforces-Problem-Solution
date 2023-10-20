#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, z; cin >> n >> z;

        vector<int> v(n);v
        for(int i = 0; i < n; i++) cin >> v[i];

        long long mx = 0;
        long long x;
        for(int i = 0; i < n; i++)
        {
            x = v[i] | z;

            if(x > mx) mx = x;
        }

        cout << mx << endl;
    }
}
