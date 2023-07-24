#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--; k--;
            }

            else
            {
                nums1[k] = nums2[j];
                j--; k--;
            }
        }

        while(j >= 0)
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        } 
        
    }
};

int main()
{
    vector<int> nums1 = {4,5,6,0,0,0};
    int m = 3;
    vector<int> nums2 = {1,4,7};
    int n = 3;

    Solution s;
    s.merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << ',';
    }

    return 0;
}