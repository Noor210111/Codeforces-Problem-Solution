#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp;
    cin >> temp;
    n--;

    int cnt = 1, mx = 1;
    while(n--)
    {
        int a;
        cin >> a;
        if(a > temp)
            cnt++;
        else
            cnt = 1;
        if(cnt > mx)
            mx = cnt;
        temp = a;
    }
    cout<< mx << endl;

    return 0;
}
