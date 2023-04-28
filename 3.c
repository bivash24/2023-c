/*Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.
Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1] */

#include <stdio.h>

void sorting_func(int *arr, int num_element);
int main()
{
	int arr[] = {0,1,1,0,1,1,1,0,0};
	int num_element = sizeof(arr)/sizeof(int);
	sorting_func(arr,num_element);
	for(int i=0; i<num_element; i++)
		printf("%d ",arr[i]);
	return 0;
}

void sorting_func(int *arr, int num_element)
{
	int i = 0;
	int j = num_element;
	int temp;

	while(j>i) {
		if(arr[j]<1) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
		}
		else
			j--;
	}
}