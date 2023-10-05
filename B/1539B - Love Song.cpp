#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MX INT_MAX
#define MN INT_MIN
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz size()
#define sort(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;

void solve();

int main()
{
    fast;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<pair<int, int>> v(q);
    for(int i = 0; i < q; i++) cin >> v[i].first >> v[i].second;

    vector<ll> cnt(n);
    cnt[0] = s[0] - 'a' + 1;
    for(int i = 1; i < n; i++)
    {
        cnt[i] = s[i] - 'a' + 1 + cnt[i - 1];
    }

    for(int i = 0; i < q; i++)
    {

        cout << cnt[v[i].second - 1] - cnt[v[i].first - 1] + (s[v[i].first - 1] - 'a') + 1 << endl;
    }
}
