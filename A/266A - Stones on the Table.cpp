
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, c = 0;
    char ch, s[51];

    scanf("%d%c", &t, &ch);

    for(i = 0; i < t; i++)
    {
        scanf("%c", &s[i]);
    }

    for(i = 0; i < t; i++)
    {
        if(s[i] == s[i + 1])
            c++;
    }

    cout << c << endl;

    return 0;
}
