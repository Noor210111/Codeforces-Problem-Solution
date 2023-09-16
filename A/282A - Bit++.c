
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, x = 0;
    char s[100], c;

    scanf("%d%c", &n, &c);

    while(n--)
    {
        gets(s);

        //cout << s;


        if(strcmp(s, "X++") == 0)
            x++;
        else if(strcmp(s, "++X") == 0)
            ++x;
        else if(strcmp(s, "X--") == 0)
            x--;
        else if(strcmp(s, "--X") == 0)
            --x;
    }

    printf("%d\n", x);

    return 0;
}
