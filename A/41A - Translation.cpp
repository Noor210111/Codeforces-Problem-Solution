#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int i, f = 0;

    cin >> s >> t;

    reverse(t.begin(), t.end());

    for(i = 0; i < s.size(); i++)
    {
        if(s[i] != t[i])
            f++;
    }

    if(f == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
