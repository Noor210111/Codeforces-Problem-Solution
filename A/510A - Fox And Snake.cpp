#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, i, j;

    cin >> r >> c;

    for(i = 1; i <= r; i++)
    {
        if(i % 2 != 0)
            for(j = 1; j <= c; j++)
                cout << "#";
        else
        {
            if(i % 4 != 0)
            {
                for(j = 1; j < c; j++)
                    cout << ".";
                cout << "#";
            }

            else
            {
                cout << "#";
                for(j = 1; j < c; j++)
                    cout << ".";
            }

        }
        cout << endl;
    }

    return 0;
}
