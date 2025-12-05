/*
* Author: Harish A Kulkarni
* Date: 2025-11-27
* Description: This program demonstrates the use of a static variable within a function to maintain state across multiple calls. 
               Each time the function is called, the static variable increments and retains its value between calls.
* License: MIT License
* Copyright (c) 2025 Harish A Kulkarni
*/

#include <iostream>

void counter() 
{
    static int count = 0; // Static variable to hold the count
    count++;
	std::cout << "Counter: " << count << std::endl;
}
int main()
{
    std::cout << "Hello World!\n";
	counter(); // Call 1
	counter(); // Call 2
	counter(); // Call 3
	return 0;
}

