
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, i, c1 = 0, c2 = 0;

    cin >> n >> k;

    vector <int> v(n);

    for(i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > 0)
        {
            c1++;
        }
    }

    if(c1 == 0)
    {
        cout << c1 << endl;
        return 0;
    }

    else
        for(i = 0; i < n; i++)
        {
            if(v[i] >= v[k - 1] && v[i] != 0)
                c2++;
        }

    cout << c2 << endl;

    return 0;
}
