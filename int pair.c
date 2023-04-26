/*Given an unsorted integer array, find a pair with the given sum in it.

• Each input can have multiple solutions. The output should match with either one of them.

Input : nums[] = [8, 7, 2, 5, 3, 1], target = 10
Output: (8, 2) or (7, 3)
*/

#include <stdio.h>

void pair_fun(int *nums, int target, int count);

int main()
{
	int count = 8;
	int nums[] = {1,2,3,4,5,2,3,4};
	int target = 5;
	pair_fun(nums,target,count);
	return 0;
}

void pair_fun(int *nums, int target, int count)
{
	for(int i=0; i<count-1; i++)
	for(int j=i+1; j<count; j++) {
		if(nums[i]+nums[j]==target) {
			printf("(%d, %d)\n",nums[i],nums[j]);
		}
	}
}