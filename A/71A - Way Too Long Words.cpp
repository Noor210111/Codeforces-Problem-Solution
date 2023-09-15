
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    while(n--)
    {
        cin >> s;

        int l = s.size();

        if(l <= 10)
            cout << s << endl;
        else
        {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
    }

    return 0;
}
