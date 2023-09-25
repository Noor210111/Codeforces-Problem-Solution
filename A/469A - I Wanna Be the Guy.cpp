#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    set<int> s;

    int x; cin >> x;
    for(int i = 1; i <= x; i++)
    {
        int temp; cin >> temp;
        s.insert(temp);
    }

    int y; cin >> y;
    for(int i = 1; i <= y; i++)
    {
        int temp; cin >> temp;
        s.insert(temp);
    }


    if(s.size() >= n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
