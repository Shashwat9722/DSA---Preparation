#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums1 = {10,20,30,40};
    vector<int> nums2 = {10,30,50,60};

    vector<int> nums;

    int i = 0;
    int j = 0;

    while(i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] <= nums2[j])
        {
            nums.push_back(nums1[i]);
            i++;
        }
        else
        {
            nums.push_back(nums2[j]);
            j++;
        }
    }

    while(i < nums1.size())
    {
        nums.push_back(nums1[i]);
        i++;
    }

    while(j < nums2.size())
    {
        nums.push_back(nums2[j]);
        j++;
    }

    cout << "Merged Array: ";

    for(int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}