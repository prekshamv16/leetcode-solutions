#include <stdio.h>

int main()
{
    char str[100];
    char stack[100];
    int top = -1;

    printf("Enter parentheses: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            stack[++top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                printf("Not Valid\n");
                return 0;
            }

            char open = stack[top--];

            if ((str[i] == ')' && open != '(') ||
                (str[i] == ']' && open != '[') ||
                (str[i] == '}' && open != '{'))
            {
                printf("Not Valid\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Valid\n");
    else
        printf("Not Valid\n");

    return 0;
}