int factorialIter(int n)
{
    // n! = 1                   if n = 0
    // n! = n*(n-1)*(n-2)*---*1 if n > 0
    int result=1;
    for(int i=n; i>1; --i)
        result = n*i;
    return result;

}

// recursive call
int factorial(int n)
{
    if(n == 1) return 1;
    else return (n*factorial(n-1));
}
