#include<iostream>
#include<conio.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
	int size,A[10],i;
    cout<<"\n\t\t\tHEAP SORT\n"<<endl;
	cout<<"\tEnter size of array = ";cin>>size;
	cout<<"\tEnter values in array : ";
	for(i=0;i<size;i++)
    {
        cin>>A[i];
	}
	auto start = high_resolution_clock::now();
	heapSort(A,size);
	cout<<"\tSorted Array - ";
    for(int i = 0 ; i < size ; i++){
        cout<<" "<<A[i];
    }
	auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout <<"\n\tTime taken by Heap Sort: "<< duration.count() << " milliseconds" << endl;
}
