#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, mx, n, x;
    char *s, ch;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%c", &n, &ch);

        s = (char *) malloc((n + 1) * sizeof(char));

        scanf("%s", s);

        mx = s[0];
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i] > mx)
                mx = s[i];
        }

        x = mx - 96;
        printf("%d\n", x);
    }

    return 0;
}
