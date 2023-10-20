#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MX INT_MAX
#define MN INT_MIN
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sz size()
#define vtr vector<int>
#define vpr vector<pair<int,int>>
#define sort(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define in(x) insert(x)
#define nl cout << "\n"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;

void solve();
ll fnd(ll x, ll y);

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

ll r, c;
ll x1, y_1, x2, y2;

void solve()
{
    cin >> r >> c;

    cin >> x1 >> y_1 >> x2 >> y2;

    cout << min(fnd(x1, y_1), fnd(x2, y2)); nl;
}

ll fnd(ll x, ll y)
{
    if((x == 1 || x == r) && (y == 1 || y == c)) return 2;
    else if((x == 1 || x == r) || (y == 1 || y == c)) return 3;
    else return 4;
}
