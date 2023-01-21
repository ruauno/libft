#include <libft.h>

int isalphaTest(int argument)
{

     return 0;
}

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalphaTest(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;
}

