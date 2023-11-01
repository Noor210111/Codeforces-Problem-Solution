#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(101);
    for(int i = 1; i <=  100; i++)
    {
        v[i] = i * i;
        //cout << v[i] << endl;
    }

    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if(a > b)
            swap(a, b);

        cout << max(a * 2, b) * max(a * 2, b) << endl;
    }

    return 0;
}
