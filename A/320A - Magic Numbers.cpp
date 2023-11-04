#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;

    int flag = 1;
    for(int i = 0; i < s.size();)
    {
        if(s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') i += 3;
        else if(s[i] == '1' && s[i + 1] == '4') i += 2;
        else if(s[i] == '1') i++;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0) cout << "NO";
    else cout << "YES";

    return 0;
}
