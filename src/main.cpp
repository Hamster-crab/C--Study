#include <iostream>

int main ()
{
    while (true) {
        std::string Test;
        std::cin >> Test;
        if (Test.empty())
        {}
        else {
            std::cout << Test << std::endl;
            break;
        }
    }
    return 0;
}