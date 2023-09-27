#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int x;
    x = n + 1;

    vector<int> v(n);

    int temp = 0, cnt = 1;
    for(int i = 0; i < n; i++)
    {
        cout << x << ' ';
        if(cnt == 2)
        {
            if(temp % 2 == 0)
            {

                x = x + 2;
                temp = x + x - 2;
                if((3 * x) % temp == 0)
                {
                    x++;
                    temp++;
                }
                cnt = 2;
            }
            else
            {
                x = x + 1;
                temp = x + x - 1;;
                if((3 * x) % temp == 0)
                {
                    x++;
                    temp++;
                }
                cnt = 2;
            }
        }
        else
        {
            temp = temp + x;
            cnt++;
            x++;
        }
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
