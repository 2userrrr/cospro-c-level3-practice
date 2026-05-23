#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]*2);
    }

    return 0;
}