//প্রোগ্রামিং সমস্যা ২ — জোড়-বিজোড় ২
#include <stdio.h>
#include<string.h>

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char N[101];
        scanf("%s", N);

        char last_digit = N[strlen(N) - 1];

        if ((last_digit - '0') % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
