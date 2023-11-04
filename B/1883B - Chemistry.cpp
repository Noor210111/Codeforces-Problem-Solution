#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int a[26] = {0}, j;
        for(int i = 0; i < s.size(); i++)
        {
          if(s[i] >= 'a' && s[i] <= 'z')
          {
             j = s[i] - 'a';
             ++a[j];
          }
       }

       int cnt = 0;
       for(int i = 0; i < 26; i++)
       {
           if(a[i] % 2 != 0) cnt++;
       }

       if(k + 1 >= cnt) cout << "YES" << endl;
       else
       {
            cout << "NO" << endl;
       }
    }

    return 0;
}
