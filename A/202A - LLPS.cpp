#include <bits/stdc++.h>

#define vtr vector<int>
#define sz size()
#define pb push_back

using namespace std;

void solve();

int main()
{
    int t = 1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    string s; cin >> s;
    sort(s.begin(), s.end());

    for(int i = s.sz - 1; ; i--)
    {
        if(s[i] != s[s.sz - 1]) break;

        cout << s[i];
    }
}

