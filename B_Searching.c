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

    int x;
    scanf("%d", &x);

    int r = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            r = i;
            break;
        }
        else
        {
            
        }
    }
    printf("%d", r);

    return 0;
}