//প্রোগ্রামিং সমস্যা ১ — জোড়-বিজোড় ১
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("even\n");
        }
        else
            printf("odd\n");
    }

    return 0;
}
