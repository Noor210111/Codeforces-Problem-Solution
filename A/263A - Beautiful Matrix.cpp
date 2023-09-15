
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, a[5][5], x, y, m, n;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
                break;
            }
        }
    }

    m = x - 3;
    n = y - 3;

    if(m < 0)
        m = m * -1;
    if(n < 0)
        n = n * -1;

    cout << m + n << endl;

    return 0;
}
