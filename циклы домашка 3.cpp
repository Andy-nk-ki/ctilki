#include <iostream>
int main()
{
    int number {};
    int mnozh {1};
    std::cin >> number;
    while (mnozh<11)
    {
        int y{};
        y=number*mnozh;
        std::cout<< number << " *" << mnozh << " = " << y << std::endl;
        mnozh+=1;
    }
    
}