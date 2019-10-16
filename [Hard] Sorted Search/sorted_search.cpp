#include <iostream>
#include <vector>

int countLessThan(const std::vector<int>& sortedVector, const int given)
{
    int mid = 0;
    int left = 0;
    int right = sortedVector.size();

    while (right>left)
    {
        mid = (right+left) /2;
        
        if (sortedVector.at(mid) == given)
        {
            while ((mid-1) > -1 && sortedVector.at(mid-1) == sortedVector.at(mid))
            {
                mid--;
            }
            return mid;
        }
        if (sortedVector.at(mid) < given)
        {
            left = ++mid;
            continue;
        }
        if (sortedVector.at(mid) > given)
        {
            right = mid;
            continue;
        }
    }

    return mid;
}

void main()
{
    std::vector<int> v = { 1, 3, 3, 6, 7, 18, 22, 22, 22, 22, 23, 23, 24, 33, 34, 36, 38, 41 };
    std::cout << countLessThan(v, 42) << std::endl;
    std::cout << countLessThan(v, 22) << std::endl;
    std::cout << countLessThan(v, 8) << std::endl;
    std::cout << countLessThan(v, 1) << std::endl;
    std::cout << countLessThan(v, 0) << std::endl;

    v = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
    std::cout << countLessThan(v, 5) << std::endl;
    std::cout << countLessThan(v, 3) << std::endl;
    std::cout << countLessThan(v, 1) << std::endl;

    v = {};
    std::cout << countLessThan(v, 5) << std::endl;
}