#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool mark[1000001];

void solv(){

}

int main()
{
    for(ll i = 2; i <= 1000000; i++)
        if(mark[i] == 0)
            for(ll j = 2 * i; j <= 1000000; j += i)
                mark[j] = 1;

    ll x;
    cin >> x;

    for(ll i = 4; i <= x - 4; i++)
    {
        if(mark[i] == 1 && mark [x - i] == 1)
        {
            cout << i << " " << x - i << endl;
            break;
        }
    }

    return 0;
}
