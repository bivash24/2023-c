/*Given an integer array, check if it contains a contiguous subarray having zero-sum.
Input : [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Output: true
Explanation: The subarrays with zero-sum are
[3, 4, -7]
[4, -7, 3]
[-7, 3, 1, 3]
[3, 1, -4]
[3, 1, 3, 1, -4, -2, -2]
[3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Input : [4, -7, 1, -2, -1]
Output: false
Explanation: The subarray with zero-sum doesn't exist
*/

#include <stdio.h>

int array_check(int *input, int size);

int main()
{
	int input_arr[] = {3,4,-7,3,1,3};
	int size = 0;
	size = sizeof(input_arr)/sizeof(int);
	array_check(input_arr,size);
	return 0;
}

int array_check(int *input, int size)
{
	int temp;
	for(int i=0;i<size-1;i++) {
		temp = 0;
		for(int j=i;j<size;j++) {
			temp += input[j];
			if(temp == 0) {
				for(int k=i; k<=j; k++)
					printf("%d ",input[k]);
				printf("\n");
			}
		}
	}
	return 0;
}
