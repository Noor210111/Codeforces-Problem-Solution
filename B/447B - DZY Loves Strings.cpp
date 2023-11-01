#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    int v[26];
    for(int i = 0; i < 26; i++)
    {
        cin >> v[i];
    }
    int mx = *max_element(v, v+26);
    int index = find(v, v + 26, mx) - v;

    //cout << mx<< " " << index;
    int ans = 0, i = 0;
    for(; i < s.size(); i++)
    {
        ans += (v[s[i] - 'a'] * (i + 1));
        //cout << ans << endl;
    }
//cout << i << endl;
    for(int j = 1; j <= k; j++)
    {
        ans += (mx * (i + 1));
        i++;
        //cout << ans << endl;
    }


    cout << ans;

    return 0;
}
