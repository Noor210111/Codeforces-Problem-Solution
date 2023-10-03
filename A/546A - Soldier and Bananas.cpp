#include <iostream>

using namespace std;

int main()
{
    int p, d, q, s, i, b;

    cin >> p >> d >> q;

    for(i = 1; i <= q; i++)
    {
        s = s + (i * p);
    }
    b = s - d;

    if(b > 0)
        cout << b << endl;
    else cout << 0 << endl;

    return 0;
}
