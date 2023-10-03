#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, f, a[4], i, j;

    cin >> n;
    label:
    n++;
    m = n;
    for(i = 0; i <= 3; i++)
    {
        a[i] = m % 10;
        m = m / 10;
    }
    f = 0;
    for(i = 0; i <= 3; i++)
    {
        for(j = i + 1; j <= 3; j ++)
        {
            if(a[i] == a[j])
                f++;
        }
    }
    if(f == 0)
        cout << n << endl;
    else
    {
        goto label;
    }

}
