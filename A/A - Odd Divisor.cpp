#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        int flag = 0;
        if(n % 2 != 0)
        {
            flag = 1;
        }
        else
        {
            long long int m = n;

            while(m % 2 == 0)
            {
                m = m / 2;
            }
            if(m != 1) flag = 1;
        }

        if(flag == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
