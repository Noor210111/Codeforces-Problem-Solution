#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int i, u = 0, l = 0;

    cin >> s;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] <= 'Z' && s[i] >= 'A')
            u++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            l++;
    }

    if(l >= u)
        cout << strlwr(s) << endl;
    else
        cout << strupr(s) << endl;

    return 0;
}
