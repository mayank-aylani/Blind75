/*
33. Search in Rotated Sorted Array

Medium

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
*/
class Solution {
public:
int search(vector<int>& nums, int x) {
//binary search approach
//Time complexity : O(log(base 2) n)
int size=nums.size();
int low=0,high=size-1;
int mid;
while(low<=high)
{
mid=low+(high-low)/2;
if(nums[mid]==x) return mid;
//left sorted
if(nums[low]<=nums[mid])
{
if(nums[low]<=x && x<nums[mid]) high=mid-1;
else low=mid+1;
}
//right sorted
else
{
if(nums[mid]<x && x<=nums[high]) low=mid+1;
else high=mid-1;
}
}//while ends
return -1;
}
};s