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
    ll n; cin >> n;

    vector<int>vi = {100, 20, 10, 5, 1};

    int cnt = 0;
    int i = 0;
    while(n)
    {
        cnt += n / vi[i];
        n = n % vi[+i];
        i++;
    }

    cout << cnt;
}
