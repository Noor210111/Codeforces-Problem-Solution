#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, a = 0, d = 0;
    char c;
    cin >> t;
    vector <char> v(t);

    for(i = 0; i < t; i++)
    {
        cin >> v[i];
        if(v[i] == 'A')
            a++;
        else if(v[i] == 'D')
            d++;
    }
    if(a == d)
        cout << "Friendship" << endl;
    else if(a > d)
        cout << "Anton" << endl;
    else if(d > a)
        cout << "Danik" << endl;

    return 0;
}
