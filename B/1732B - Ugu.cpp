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

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(cnt % 2 == 0)
        {
            if(s[i] == '1' && s[i + 1] == '0')
            {
                cnt++;
            }
        }
        else
        {
            if(s[i] == '0' && s[i + 1] == '1')
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
