#include <iostream>

using namespace std;

int main()
{
    int x, y = 5, c = 0;

    cin >> x;

    while(x != 0)
    {
        if(x >= y)
        {
            c = c + (x / y);
            x = x % y;
        }

        else y--;
    }

    cout << c << endl;

    return 0;
}
