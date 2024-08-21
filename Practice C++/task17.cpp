#include <iostream>

// Recursive function to check if a number is prime
bool isPrime(int number, int divisor = 2)
{
    // Base cases
    if (number <= 2)
        return (number == 2);
    if (number % divisor == 0)
        return false;
    if (divisor * divisor > number)
        return true;

    // Recursive case: check if the number is divisible by the next divisor
    return isPrime(number, divisor + 1);
}

// Recursive function to find the sum of all prime numbers in a range
int sumOfPrimes(int start, int end)
{
    // Base case: if the start becomes greater than the end, stop the recursion
    if (start > end)
        return 0;

    // Recursive case: if the current number is prime, add it to the sum
    int sum = isPrime(start) ? start : 0;

    // Recursively call the function with the next number in the range
    return sum + sumOfPrimes(start + 1, end);
}

int main()
{
    int start, end;
    std::cout << "Input the starting number: ";
    std::cin >> start;
    std::cout << "Input the ending number: ";
    std::cin >> end;

    // Calculate the sum of prime numbers using recursion
    int sum = sumOfPrimes(start, end);

    std::cout << "Sum of prime numbers in the said range [" << start << ", " << end << "]: " << sum << std::endl;

    return 0;
}
