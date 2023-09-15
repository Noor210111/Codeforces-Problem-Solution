
#include <bits/stdc++.h>

using namespace std;

string lcase(string n)
{
    int i;

    for(i = 0; n[i] != '\0'; i++)
    {
        if(n[i] >= 65 && n[i] <= 90)
            n[i] = n[i] + 32;
    }

    return n;
}

int main()
{
    string a, b, c, d;
    int i, n, m, flag = 0;

    cin >> a >> b;

    c = lcase(a);
    d = lcase(b);

    n = c.size();

    for(i = 0; i < n; i++)
    {
        if(c[i] == d[i])
            continue;
        else
        {
           m = c[i] - d[i];
           if(m < 0)
            flag--;
           else if(m > 0)
            flag++;
            break;
        }
    }

    cout << flag << endl;

    return 0;
}
