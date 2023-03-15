#include <stdio.h>
int main()
{
    int low, high, i, flag, temp;
    printf("Enter two numbers(intevals): ");
    scanf("%d %d", &low, &high);

    //swapping numbers if low is greater than high
    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}
