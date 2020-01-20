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

	// ti.detach();  // 1. main thread let t1 to run on it own.
	                 // 2. t1 will be demon process once detached
	                 // 3. Main thread may finsh before demon process
	                 // 4. C++ runtime library is responsible returning 
	                 //     t1's resources
	                 // 5. If neither detached nor join is called,
	                 //     terminate() terminate will be called.
	                 // 6. A theard once detached, becomes unjoinable
	                 //     t1.joinable() returns false.  
	return 0;
}

