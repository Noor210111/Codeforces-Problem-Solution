#include <bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define pb              push_back

using namespace std;

int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll a[200003];
        for(ll i = 0; i < n; i++)
            cin >> a[i];

        map <ll, ll> mp;
        set<ll> s;
        for(ll i = 0; i < n; i++)
        {
            mp[a[i]]++;
            s.insert(a[i]);
        }

        ll m = 0;
        map<ll, ll> :: iterator itr;
        for(itr = mp.begin(); itr != mp.end(); itr++)
        {
            ll d = itr -> second;
            m = max(m, d);
        }

        ll team1 , team2;
        team1 = s.size();
        team2 = m;
        if(team1 > team2)
            cout << team2 << endl;

        else if(team1 < team2)
            cout << team1 << endl;

        else
            cout << team1 - 1 << endl;
    }

    return 0;
}
