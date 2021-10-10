/*
title: Fibonacci using recursion
author: Shaleen Badola
date: 10/10/2021
*/

#include<bits/stdc++.h>
using namespace std;


//  Recursive function to calculate nth fibonacci number
int fib(int n){

	// if n==1 or n==0 return n
	if (n <= 1) return n;

	// return the sum of previous two elements in series
	return fib(n - 1) + fib(n - 2);
}

int main(){
	int n = 9;

	// Calling the fib function
	cout << fib(n) << '\n';

	return 0;
}
