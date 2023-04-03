#include<bits/stdc++.h>
using namespace std;

int noOfTrailingZeroes(double num);
double factorial(int n);
int noOfTrailingZeroesInFactorial(int num);

int main()
{
    int n;
    cin >> n;

    noOfTrailingZeroesInFactorial(n);
    return 0;
}

int noOfTrailingZeroesInFactorial(int num)
{
    int result = noOfTrailingZeroes(factorial(num));
    cout << result;
    return result;
}

double factorial(int n)
{
    //implement your code here
    int i = 1;
    double result = 1;
    while( i <= n)
    {
        result *= i;
        i++;
    }
    return result;
}

int noOfTrailingZeroes(double num)
{
        int count = 0;
        int last_digit;

        while(num != 0)
        {
            last_digit = num % 10;
            if(last_digit == 0)
                count++;
            else
                return count;

            num /= 10;
        }
}
