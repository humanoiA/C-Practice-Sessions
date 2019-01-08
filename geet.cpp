#include <stdio.h>
void rev()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        rev();
        printf("%c",c);
    }
}
int main()
{
    rev();
    return 0;
}


