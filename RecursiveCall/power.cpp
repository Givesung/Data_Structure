int slowPower(double x, int n)
{
    result = 1.0;
    for(int i=0; i<n; ++i)
        result *= x;
    return result;
}

//recursive call
int fastPower(double x, int n)
{
    if(n==0) return 1;
    else if((n%2==0))
        return fastPower(x^2, n/2);
    else
        return fastPower(x^2, (n-1)/2);
}
