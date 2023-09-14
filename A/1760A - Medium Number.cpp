#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c;

    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c;

        if(a < b && b < c || c < b && b < a)
            cout << b << endl;
        else if(b < a && a < c || c < a && a < b)
            cout << a << endl;
        else if(a < c && c < b || b < c && c < a)
            cout << c << endl;

    }

    return 0;
}
