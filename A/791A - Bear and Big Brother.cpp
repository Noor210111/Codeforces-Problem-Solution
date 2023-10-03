#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;

    cin >> a >> b;

    lebel:
        a = a * 3;
        b = b * 2;
        c++;
        if(a > b)
        {
            cout << c << endl;
            return 0;
        }
        else goto lebel;
}
