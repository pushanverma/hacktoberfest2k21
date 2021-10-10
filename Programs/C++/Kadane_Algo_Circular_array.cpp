// Kadane Algorithm for Circular Arrays
// Finds the max sum subarray and returns the sum

#include<iostream>
#include<climits>
using namespace std;

int kadane(int *arr, int n)
{
	int count = 0;
	int global_max = INT_MIN;
	for(int i=0;i<n;i++)
	{
		count = max(count+arr[i],arr[i]);
		if(count>global_max)
			global_max=count;
	}
	return global_max;
}
int kadaneCircular(int* arr,int n)
{
	int max_kadane = kadane(arr,n);
	int max_wrap = 0;
	for(int i=0;i<n;i++)
	{
		max_wrap+=arr[i];
		arr[i]=-arr[i];
	}	
	max_wrap+=kadane(arr,n);
	return max(max_wrap,max_kadane);
}
int main()
{
	//int arr[]={1,-2,6,7,-9,-12,34}; output:46
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<kadaneCircular(arr,n)<<endl;
	return 0;
}
