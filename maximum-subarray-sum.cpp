/*
53. Maximum Subarray

Medium

Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/s
/*class Solution {
public:
int maxSubArray(vector<int>& array) {
//brute force
int size=array.size();
//let assign the smallest value to max initially
int max=INT_MIN;
int sum;
for(int i=0;i<size;++i)
{
for(int j=i+1;j<=size;++j)
{
sum=0;
for(int k=i;k<j;++k) sum+=array[k];  //let 0,1,2 a subarray
max=(sum>max)?sum:max;
}
}
return max;
}
};*/

 
/*class Solution {
public:
int maxSubArray(vector<int>& array) {
//better approach
int size=array.size();
int max=INT_MIN;
int sum;
for(int i=0;i<size;++i)   //-2
{
sum=0;
for(int j=i;j<size;++j)  //-3, 
{
sum+=array[j];   //-3
max=(sum>max)?sum:max;  //0
}
}
return max;
}
};*/


class Solution {
public:
int maxSubArray(vector<int>& array) {
//kadane's algorithm
int size=array.size();
long long sum=0;
int maximum=INT_MIN;
for(int i=0;i<size;++i)
{
sum+=array[i];
maximum=(sum>maximum)?sum:maximum;
sum=(sum<0)?0:sum;
}
return maximum;
}
};