#include <iostream>
#include <vector>

template <typename T> 
void reverse(T& v)
{
    // Store the two elements to be switched in temporary variables
    // Replace one
    // Replace the second
    // Keep going until I reach the middle of the vector
    int size = v.size()-1;
    for (int i = 0; i <= (size/2); i++)
    {
        auto left = v.at(i);
        v.at(i) = v.at(size - i);
        v.at(size - i) = left;
    }
}

template <typename T>
void print(const T& v)
{
    for (const auto& element : v)
    {
        std::cout << element << ", ";
    }
    std::cout << std::endl;
}

void main()
{
    std::vector<int> vint{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    reverse(vint);
    print(vint);

    std::vector<char> vchar{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
        'y', 'z' };
    reverse(vchar);
    print(vchar);
}