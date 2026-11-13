//You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums ,int numSize , int target  ,int* returnsize)
    {int* result =(int*) malloc ( 2*sizeof(int));
    
    *returnsize= 2 ;
    for (int i=0 ;i< numSize;i++)
    {for (int j=i+1 ;j<numSize ;j++)
     {if (nums[i]+nums[j]==target)
     {result [0]=i;
     result [1]=j;
     return result;}}
    
    }
returnsize=0;
return 0 ;  }


int main (){


    
}
