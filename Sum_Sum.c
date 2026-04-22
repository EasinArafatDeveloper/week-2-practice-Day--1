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

    int negative_sum = 0;
    int positive_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            // negative
            negative_sum = negative_sum + arr[i];
        }
        else
        {
            // positive
            positive_sum = positive_sum + arr[i];
        }
    }

    printf("%d %d", positive_sum, negative_sum);

    return 0;
}