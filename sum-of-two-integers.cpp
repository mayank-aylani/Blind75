/*
371. Sum of Two Integers

Medium

Given two integers a and b, return the sum of the two integers without using the operators + and -.
*/
class Solution {
public:
int getSum(int a, int b) {
while(b!=0)
{
int carry=a&b; // Find common set bits of a,b
a=a^b;  //Sum 'a' and 'b' without considering the carry
b=carry<<1;
}
return a;
}
};