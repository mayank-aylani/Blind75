/*
1. Two Sum

Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute force
        //Time complexity : O(n^2)
        //Space complexity : O(1)
        //A vector is used to return the indexes
        vector<int> indexes;
        int size=nums.size();
        for(int i=0;i<size;++i)
        {
            for(int j=i+1;j<size;++j)
            {
                if(nums[i]+nums[j]==target)
                {
                    indexes.push_back(i);
                    indexes.push_back(j);
                }
            }
        }
        return indexes;
    }
};