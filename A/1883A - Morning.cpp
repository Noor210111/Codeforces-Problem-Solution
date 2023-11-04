#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

        int ans = 0;
        char c = '1';
        for(int i = 0; i < s.size(); i++)
        {
            int a = s[i] - c;

            if(s[i] == '0' && c != '0')
            {
                if(a > 0) ans += 10 - a - 1;
                else if(a < 0) ans += a + 10;
            }
            else if(s[i] != '0' && c == '0')
            {
                ans += 10 - a;
            }
            else ans += abs(a);

            ans++;

            c = s[i];
        }

        cout << ans << endl;
    }

    return 0;
}
