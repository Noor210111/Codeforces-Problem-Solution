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

int main()
{
    int s, n;

    cin >> n >> s;

    s--;

    int a[10004], b[10004];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    if(!a[0])
    {
        no;
        return 0;
    }

    if(a[s])
    {
        yes;
        return 0;
    }
    else if(!b[s])
    {
        no;
        return 0;
    }

    int flag = 0;
    for(int i = s; i < n; i++)
        if(a[i] && b[i]) flag = 1;


    if(flag) yes;
    else no;
}
