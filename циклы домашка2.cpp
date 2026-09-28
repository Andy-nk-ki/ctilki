#include <iostream>
 int main()
 {
    int number{};
    int summ{};
    std::cin >> number;
    while (number !=0)
    {
        summ+= (number % 10);
        number = number/10;


    }
    std::cout<<summ << std::endl;
}