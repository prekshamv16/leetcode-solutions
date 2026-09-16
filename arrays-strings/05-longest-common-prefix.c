#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[100][100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    int len = strlen(str[0]);

    for (int i = 1; i < n; i++)
    {
        int j = 0;

        while (j < len && str[0][j] == str[i][j])
        {
            j++;
        }

        len = j;
    }

    printf("Longest Common Prefix: ");

    if (len == 0)
        printf("No common prefix");
    else
    {
        for (int i = 0; i < len; i++)
            printf("%c", str[0][i]);
    }

    printf("\n");

    return 0;
}