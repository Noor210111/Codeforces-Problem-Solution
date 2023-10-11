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

int32_t main()
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
    int n, a;
    int div = 0, sum = 0, one = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a == 1)
            {
                one++;
                sum++;
            }
            else
                sum += 2;
        }
        if(sum % 2 == 0)
        {
            div = sum/2;

            if(div % 2 == 0)
                yes;
            else
            {
                if(one) yes;
                else no;
            }
        }
        else no;
}
