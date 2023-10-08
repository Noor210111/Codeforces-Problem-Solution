#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, a, q;
        cin >> n >> a >> q;

        string s; cin >> s;

        int flag = 0;
        if(n == a)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            int cnt = a;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '+')
                {
                    cnt++;
                    a++;
                }
                else
                {
                    cnt--;
                }

                if(cnt == n)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1) cout << "YES" << endl;
        else
        {
            if(a >= n) cout << "MAYBE" << endl;
            else cout << "NO" << endl;
        }

        cout << endl;
    }
}
