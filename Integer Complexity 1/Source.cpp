#include <iostream>


int main()
{
    std::cout << "Type integer to be processed. Type a letter or symbol to quit." << '\n';
    long long number;

    while (std::cin >> number)
    {
        long long factor;
        {
            factor = sqrt(number);

            while ((number%factor) != 0 && factor > 0)
            {
                factor--;
            }
        }
        long long sum = factor + (number / factor);
        std::cout << "\n" << "Sum: " << sum << '\n' << '\n';
    }
}