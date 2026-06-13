#include <stdio.h>

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0] + arr[n-1]);

    return 0;
}