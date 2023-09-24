#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s; cin >> s;

        int sum = 0;
        for(int i = 0; i < s.size(); )
        {
            if(s[i] == 'B')
            {
                i += k;
                sum++;
            }
            else i++;
        }

        cout << sum << endl;
    }

    return 0;
}
