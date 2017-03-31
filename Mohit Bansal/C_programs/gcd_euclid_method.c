int greatestCommonDivisor(int m, int n)
{
    int r,true;
    if((m == 0) || (n == 0))
        return 0;
    else if((m < 0) || (n < 0))
        return -1;

    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);

    return n;
}

int main(void)
{
    int num1, num2,gcd;
    printf("enter first no");
    scanf("%d",&num1);
    printf("enter second no");
    scanf("%d",&num2);
    gcd = greatestCommonDivisor(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
