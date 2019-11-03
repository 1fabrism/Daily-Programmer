#include <iostream>
#include <vector>

std::vector<int> slice(std::vector<int>* v, int begin, int end)
{
    std::vector<int> sliced;
    for (begin; begin <= end; begin++)
    {
        sliced.push_back(v->at(begin));
    }
    return sliced;
}

void print(std::vector<int> v)
{
    for (const auto& element : v)
    {
        std::cout << element << ", ";
    }
}

void main()
{
    std::vector<int> v{ 0,1,2,3,4,5,6,7,8,9 };
    v = slice(&v, 0, 4);
    print(v);
}