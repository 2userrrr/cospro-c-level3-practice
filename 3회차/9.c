#include <stdio.h>

int main()
{
    char n[20];
    int total = 0;

    scanf("%s", n);

    for(int i = 0; n[i] != '\0'; i++) 
    {
        total += (n[i]-'0');
    }
    

    printf("%d", total);

    return 0;
}