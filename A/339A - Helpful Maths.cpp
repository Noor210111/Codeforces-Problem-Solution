
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, j, temp;

    cin >> s;

    if(s.size() == 1)
        cout << s << endl;
    else
    {
        for(i = 0; i < s.size() - 2; i = i + 2)
        {
            for(j = 0; j < s.size() - i - 2; j = j + 2)
            {
                if (s[j] > s[j + 2])
                {
                    temp = s[j];
                    s[j] = s[j + 2];
                    s[j + 2] = temp;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
