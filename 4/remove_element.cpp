#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 2, 3, 5};
    int value = 2; 
    Solution s;
    s.removeElement(nums1, value);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << ',';
    }
    return 0;
}