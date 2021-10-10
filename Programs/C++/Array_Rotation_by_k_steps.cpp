/*
 * Array Rotation by k steps
 * 
 * Here is a brief overview of the algorithm used.
 * for right rotation, we look at the position which the first element would have been shifted to
 * if done so.
 * Then we 
 * 	rotate the array, 
 * 	rotate the first section untill the calculated position 
 * 	rotate rest of the array
 * 
 * For left rotation similar concept is used only that the calculated position changes
 * */



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int>&arr, int k, bool flag)
{
	// flag=0 : rotate right
	// flag=1 : rotate left
	
	int n=arr.size();
	if(!flag)
		k=k%n;
	else
		k=(n-k)%n;
	
	reverse(arr.begin(),arr.end());
	reverse(arr.begin(), arr.begin()+k);
	reverse(arr.begin()+k,arr.end());
		
}



int main()
{
	int n,k;
	cin>>n;
	vector<int>v; 
	
	for(int i=0;i<n;i++){
		int temp;cin>>temp;
		v.push_back(temp);
	}
	cin>>k;
	
	rotateArray(v,k,0); // Rotation to right by k steps 
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	rotateArray(v,k,1); //Rotation to left by k steps
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" "; // Expected to be same as the original array
	}
	return 0;
}
