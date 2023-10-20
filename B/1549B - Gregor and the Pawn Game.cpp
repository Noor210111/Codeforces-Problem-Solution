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

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    ll n; cin >> n;
    string a, b; cin >> a >> b;

    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] == '1')
        {
            //cout << b[i]; nl;
            if(i > 0 && a[i - 1] == '1')
            {
                //cout << a[i - 1]; nl;
                cnt++;
                a[i - 1] = '1';
            }
            else if(a[i] == '0')
            {
                //cout << a[i]; nl;
                cnt++;
                a[i] = '2';
            }
            else if(i < n - 1 && a[i + 1] == '1')
            {
                //cout << a[i + 1]; nl;
                cnt++;
                a[i + 1] = '2';
            }
        }
    }

    cout << cnt; nl;
}
