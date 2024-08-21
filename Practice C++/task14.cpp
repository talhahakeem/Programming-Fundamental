#include <iostream>
#include <string>

void reverseString(std::string &str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recur for substring from start+1 to end-1
    reverseString(str, start + 1, end - 1);
}

int main()
{
    std::string inputString;
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    reverseString(inputString, 0, inputString.length() - 1);

    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
