#include <iostream>
#include <vector>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
        // int k = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        for (int k = m + n - 1; k >= 0; k--)
        {
            if (i < 0)
            {
                nums1[k] = nums2[j];
                j--;
            }
            else if (j < 0)
            {
                nums1[k] = nums1[i];
                i--;
            }
            if ((i >= 0) && (j >= 0) && nums1[i] >= nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else if ((i >= 0) && (j >= 0) && nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
            }
        }

        return;
    }
};

int main()
{
    std::vector<int> nums1 = {1};
    std::vector<int> nums2 = {};

    Solution s;
    s.merge(nums1, 1, nums2, 0);
    for (int i = 0; i < nums1.size(); i++)
    {
        std::cout << nums1[i] << ',';
    }
    
}