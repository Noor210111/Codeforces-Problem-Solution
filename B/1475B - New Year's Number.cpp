#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    while(n--)
    {
        int num; cin >> num;

        if(num % 2020 <= num / 2020) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
