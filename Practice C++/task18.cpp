// Recursive function to find the greatest common divisor (GCD) of two numbers
#include <iostream>

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int x, int y)
{
    // Base case: if either number is 0, return the other number as the GCD
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    // Recursively find the GCD by calling the function with (y, x % y)
    return gcd(y, x % y);
}
int main()
{
    int n1, n2;
    std::cout << "Input the first number: ";
    std::cin >> n1;
    std::cout << "Input the second number: ";
    std::cin >> n2;

    // Calculate the GCD using recursion
    int result = gcd(n1, n2);

    std::cout << "The GCD of " << n1 << " and " << n2 << " is: " << result << std::endl;

    return 0;
}
