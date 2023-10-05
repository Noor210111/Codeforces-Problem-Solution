#include <iostream>

using namespace std;

int main()
{
    int n, i, f = 0;

    cin >> n;

    int a[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            f = 1;
    }


    if(f == 0)
        cout << "Easy" << endl;

    else cout << "Hard" << endl;

    return 0;
}
