#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        string s[11];
        for(int i = 0; i < 10; i++)
            cin >> s[i];

        int sum = 0, a, b;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(s[i][j] == 'X')
                {
                    a = i + 1;
                    b = j + 1;

                    if(a > 5) a -= 5;
                    if(b > 5) b -= 5;

                    sum += min(a, b);
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
