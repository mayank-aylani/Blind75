/*
11. Container With Most Water

Medium

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        //brute force
        //the minimum out of 2 bars will be the height of container
        //finding all possible containers
        //Time complexity : O(n^2)
        /*int size=height.size();
        int i,j,width,ht,area,maximum;
        for(i=0;i<size;++i)
        {
           for(j=i+1;j<size;++j) //right boundary
            {
                width=j-i;
                ht=(height[i]<height[j])?height[i]:height[j];
                area=width*ht;
                maximum=(area>maximum)?area:maximum;
            }
        }
        return maximum;*/


        //optimal approach/two pointer
        //Time complexity : O(n)
        int size=height.size();
        int lp=0,rp=size-1;
        int width,ht;
        int currentWater=0,maxWater=0;
        while(lp<rp)
        {
            width=rp-lp;
            ht=(height[lp]<height[rp])?height[lp]:height[rp];
            currentWater=width*ht;
            maxWater=(currentWater>maxWater)?currentWater:maxWater;
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};