#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        int max_i = (nums.size()) - 2;
        cout << "max i can be is: " << max_i << endl;
        while (i <= max_i)
        {
            vector<int>::iterator first = nums.begin() + i;
            vector<int>::iterator last = first + 1;
            for (int j = i + 1; j < nums.size(); j++)
            {
                last = nums.begin() + j;
                if (*last != *first)
                    break;
            }
            if (first != last - 1)
                nums.erase(first + 1, last);
            i++;
        }
        return nums.size();
    }
};

int main()
{
    vector<int> nums = {1, 1};
    Solution s;
    s.removeDuplicates(nums);

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ',';
    cout << endl << "Num size is: " << nums.size() <<  endl;
    return 0;
}