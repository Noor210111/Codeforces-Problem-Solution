#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    int n,i,ans;

    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        string a = "", b = "";

        for(i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                a += "0";
                b += "0";
            }
            else if(s[i] == '1')
            {
                if(a >= b) {
                    a += "0";
                    b += "1";
                }
                else
                {
                    a += "1";
                    b += "0";
                }
            }
            else if(s[i] == '2')
            {
                if (a > b)
                {
                    a += "0";
                    b += "2";
                }
                else if (a == b)
                {
                    a += "1";
                    b += "1";
                }
                else
                {
                    a += "2";
                    b += "0";
                }
            }
        }

        cout << a.c_str() << endl << b.c_str() << endl;
    }

    return 0;;
}
