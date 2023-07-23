#include <iostream>
#include <vector>
#include "constants.h"

int main()
{
    std::cout << HELLO_STR << std::endl;
    std::vector<int> my_nums;
    my_nums.push_back(12);
    
    for (auto it = my_nums.begin(); it != my_nums.end(); it++)
        std::cout << *it << std::endl;
    return 0;
}