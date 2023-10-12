#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> v(3);
        for(int i = 0; i < 3; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int cnt = 0;

        if(v[1] % v[0] == 0 && v[2] % v[0] == 0)
        {
            cnt +=(v[1] / v[0]) - 1;
            cnt +=(v[2] / v[0]) - 1;

            if(cnt <= 3) cout << "Yes" << endl;
            else cout << "NO" << endl;
        }
        else cout << "No" << endl;

    }

    return 0;
}
