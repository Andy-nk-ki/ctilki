#include <iostream>

int main()
{
    int number{};
    int summ{};
    do
        {
        
            std::cout <<"Vvedi chislo"<< std::endl;
            std:: cin >> number ;
            summ+= number;
        }
    while (number!=0);
    std::cout << summ << std:: endl;
}