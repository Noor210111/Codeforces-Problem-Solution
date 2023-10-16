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
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a);
    sort(b);

    int i = 0, j = n - 1;
    while(k--)
    {
        if(b[j] > a[i])
        {
            int temp = a[i];
            a[i] = b[j];
            b[j] = temp;

            i++;
            j--;
        }
    }

    int sum = 0;
    for(int x = 0; x < n; x++) sum += a[x];

    cout << sum << endl;
}
