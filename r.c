
#include <stdio.h>

int checkPrimeNum(int n);
int main()
{
    int n1, n2, i, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numberbers between %d and %d are: ", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
        // i is a prime num, flag will be equal to 1
        flag = checkPrimeNum(i);

        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}


int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
