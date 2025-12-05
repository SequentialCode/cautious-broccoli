# 🗓️ Day 0002: Counting Vowels in a String Vector

## 🎯 Topic: C++ Container and String Iteration

This entry demonstrates a practical application of iterating over standard C++ containers (`std::vector<std::string>`) and individual strings to perform a basic analysis (counting vowels). It highlights the use of **range-based for loops** for cleaner, more readable iteration.

## 📝 C++ Features Demonstrated

### 1. Range-Based For Loops (C++11)

The code utilizes two nested range-based `for` loops, which simplify iteration compared to traditional index-based loops:

* **Outer Loop:** Iterates over the `std::vector` of words:
    ```cpp
    for (const std::string& word : words)
    ```
    * **Note:** Using `const std::string&` prevents unnecessary copying of large strings and ensures the vector content is not accidentally modified.

* **Inner Loop:** Iterates over the individual characters of each string:
    ```cpp
    for (const char& letter : word)
    ```

### 2. Character Comparison and Case Sensitivity

The core logic uses a long `if` statement to check for both lowercase and uppercase vowels, demonstrating necessary handling for **case sensitivity** in string processing.

### 3. Container Management

The `main` function correctly initializes and passes an `std::vector<std::string>` to the function, illustrating basic usage of the standard library's dynamic array container.

## 💻 Code Implementation: `VowelCounter.cpp` (or Project Name)

### `countVowels()` Function

```cpp
void countVowels(const std::vector<std::string>& words)
{
    // ... loop implementation ...
}