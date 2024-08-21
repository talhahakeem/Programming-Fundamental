#include <iostream>
#include <string>

std::string reverseString(std::string str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else
    {
        std::string firstChar = str.substr(0, 1);
        std::string restOfString = str.substr(1, str.length() - 1);
        return reverseString(restOfString) + firstChar;
    }
}

int main()
{
    std::string str = "Wolf";
    std::cout << reverseString(str) << std::endl;
    return 0;
}