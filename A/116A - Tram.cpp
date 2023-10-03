#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i, c, x;
    cin >> n;
    vector <pair<int,int>> v(n);

    for(i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    c = v[0].second; x = v[0].second;
    for(i = 1; i < n; i++)
    {
        x = x - v[i].first + v[i].second;
        if(x > c)
            c = x;
    }

    cout << c << endl;

    return 0;
}
