package ADA_LAB;

import java.util.Scanner;

public class sixthexp {

	public static void sort(int[] arr, int n) {
		for (int i = n / 2 - 1; i >= 0; i--)
			heapify(arr, n, i);
		for (int i = n - 1; i > 0; i--) {
			int temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
			heapify(arr, i, 0);
		}
	}

	public static void heapify(int arr[], int n, int i) {
		int largest = i;
		int l = 2 * i + 1;
		int r = 2 * i + 2;
		if (l < n && arr[l] > arr[largest])
			largest = l;
		if (r < n && arr[r] > arr[largest])
			largest = r;
		if (largest != i) {
			int swap = arr[i];
			arr[i] = arr[largest];
			arr[largest] = swap;
			heapify(arr, n, largest);
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// HEAP SORT
		Scanner scn = new Scanner(System.in);
		System.out.print("Enter the number of elements: ");
		int n = scn.nextInt();
		int[] arr = new int[100];
		System.out.println("Enter the elements: ");
		for (int i = 0; i < n; i++) {
			arr[i] = scn.nextInt();
		}
		long initial = System.nanoTime();
		sort(arr, n);
		long finalt = System.nanoTime();
		long TimeTaken = finalt - initial;
		System.out.println();
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println("\nTime Taken: " + TimeTaken + "ns");
		System.out.println("\nGAVNEESH JAIN(12IT19)");
	}

}
