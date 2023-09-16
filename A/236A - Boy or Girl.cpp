
#include<iostream>

using namespace std;

int main()
{
    string s;
    int i, j, k, c = 0;

    cin >> s;

    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                for(k = j; s[k] != '\0'; k++)
                    s[k] = s[k + 1];
            }
        }
    }
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                for(k = j; s[k] != '\0'; k++)
                    s[k] = s[k + 1];
            }
        }
    }

    for(i = 0; s[i] != '\0'; i++)
        c++;

    if(c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
