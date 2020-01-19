// MultiThreading.cpp : Defines the entry point for the console application.
//
// Concurrent C++
//

#include<iostream>
#include<thread>
#include "stdafx.h"

using namespace std;

// First example:
void threadOne()
{
	cout << "Hello Thread !!!" << endl;
}

int main()
{
	std::thread t1(threadOne); // thread arg passed by function pointer
	t1.join(); // main thread wait for t1 to finish
	return 0;
}

