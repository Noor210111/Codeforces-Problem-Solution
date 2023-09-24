#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k; cin >> k;

    vector<int> v(12);
    for(int i = 0; i < 12; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int x = 0, cnt = 0;
    int i = 11;
    while(x < k)
    {
        x += v[i];
        i--;
        cnt++;
        if(i == -1) break;
    }

    if(x < k) cout << -1;
    else cout << cnt;

    return 0;
}
