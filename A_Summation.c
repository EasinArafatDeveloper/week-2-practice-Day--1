#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }

    if (sum < 0)
    {
        long long p = -sum;
        printf("%lld", p);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}