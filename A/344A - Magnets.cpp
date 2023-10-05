#include <iostream>

using namespace std;

int main()
{
    int n, x, c = 1;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    x = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] != x)
        {
            c++;
            x = a[i];
        }
    }

    cout << c << endl;

    return 0;
}
