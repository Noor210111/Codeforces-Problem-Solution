#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;

        if((b - a) > 1)
            c++;
    }

    cout << c << endl;

    return 0;
}
