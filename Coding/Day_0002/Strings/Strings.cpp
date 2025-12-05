/*
* Author: Harish A Kulkarni
* Date: 2025-12-05
* Description: This program counts the number of vowels in a string and prints it.
* License: MIT License
* Copyright (c) 2025 Harish A Kulkarni
*/

#include <iostream>
#include <string>
#include <vector>

void countVowels(const std::vector<std::string>& words)
{
	for (const std::string& word : words)
	{
		int vowelsCounter = 0;
		for (const char& letter : word)
		{
			if (letter == 'a' || letter == 'A'
				|| letter == 'e' || letter == 'E'
				|| letter == 'i' || letter == 'I'
				|| letter == 'o' || letter == 'O'
				|| letter == 'u' || letter == 'U')
			{
				vowelsCounter++;
			}
		}
		std::cout << "String: " << word << "| Vowels: " << vowelsCounter << std::endl;
	}
}

int main()
{
	std::vector<std::string> words = { "Hello", "world", "from", "C++" };
	countVowels(words);
}

