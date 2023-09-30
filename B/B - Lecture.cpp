#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    vector<pair<string, string>> s(m);
    for(int i = 0; i < m; i++) cin >> s[i].first >> s[i].second;

    string l[n];
    for(int i = 0; i < n; i++) cin >> l[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(l[i] == s[j].first || l[i] == s[j].second)
            {
                if(s[j].first.size() > s[j].second.size())
                    cout << s[j].second << ' ';
                else cout << s[j].first << ' ';
            }
        }
    }

    return 0;
}
