#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int e = 0, ei, o = 0, oi;
    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
        {
            e++;
            ei = i;
        }
        else
        {
            o++;
            oi = i;
        }
    }

    //cout << e << " " << o << endl;
    if(e < o) cout << ei + 1;
    else cout << oi + 1;

    return 0;
}
