#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    int count = 0;

    scanf("%s", s);

    for(int i = 0; i< strlen(s); i++)
    {
        if(s[i] == '1') {
        count++;
        }
    }

    printf("%d", count);

    return 0;
}