double myPow(double x, int n){
    if (n == 0)
        return 1.0;

    double result = 1.0;
    long a = labs(n);
    
    while (a > 0) {
        if (a % 2 == 1)
            result *= x;

        x *= x;
        a /= 2;
    }
    
    if (n < 0)
        result = 1.0 / result;

    return result;
}