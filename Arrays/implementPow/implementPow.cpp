class Solution
{
public:
    double power(double x, int n)
    {
        if (n == 0)
            return 1;
        if (n % 2 == 0)
            return power(x * x, n / 2);
        return x * power(x * x, n / 2);
    }
    double myPow(double x, int n)
    {
        double num = n;
        if (num < 0)
            num = -1 * num;
        double ans = power(x, n);
        if (n < 0)
            return (double)1.0 / ans;
        return ans;
    }
};