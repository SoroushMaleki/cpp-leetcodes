#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int j = nums.size() - 1;
        for (int i = 0; i <= j; i++)
        {
            if (nums[i] != val)
                continue;

            else
            {
                k--;
                while(nums[j] == val && (j > i))
                {
                    k--;
                    j--;
                }
                nums[i] = nums[j];
                nums[j] = val;
                j--;     
            }
                
        }
        return k;
    }
};



int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution s;
    int k = s.removeElement(nums, val);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ',';
    }
    cout << endl << k;
    return 0;
}