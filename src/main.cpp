#include <iostream>

void calc()
{
    int num1, num2, Ans;
    std::string word;

    std::cin >> num1;
    std::cin >> word;
    std::cin >> num2;

    if (word == "+")
    {
        Ans = num1 + num2;
    }
    else if (word == "-")
    {
        Ans = num1 - num2;
    }
    else if (word == "*")
    {
        Ans = num1 * num2;
    }
    else if (word == "/")
    {
        Ans = num1 / num2;
    }
    else if (word == "%")
    {
        Ans = num1 % num2;
    }
}

int main() {
    while (true) {
        calc();
        std::string ic;
        std::cin >> ic;
        if (ic == "=") {
            std::cout << Ans << std::endl;break;
        } else {
            calc();
        }
        return 0;
    }
}