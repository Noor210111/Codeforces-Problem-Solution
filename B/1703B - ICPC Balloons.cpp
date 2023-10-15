#include<bits/stdc++.h>

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

void int_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve();

int main()
{
    //int_code();
    fastIO

    int t;
    //t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    vtr v;
    v.assign(26, 0);

    string sa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int cnt = 0;
    for(int i = 0; i < s.sz; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(s[i] == sa[j])
            {
                if(v[j] == 0)
                {
                    cnt += 2;
                    v[j] = 1;
                }
                else cnt++;
            }
        }
    }

    cout << cnt << endl;
}
