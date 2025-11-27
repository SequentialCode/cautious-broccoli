# 🗓️ Day 0001: Implementing a Persistent Local Variable (Static Keyword)

## 🎯 Topic: C++ Static Local Variables

This entry explores the functionality of the `static` keyword when applied to a local variable inside a function. This is a crucial concept for understanding how to maintain state within a function across multiple calls without resorting to global variables or class members.

## 📝 Concept Explained

When a variable is declared as `static` within a function:

1.  **Lifetime:** The variable's lifetime is extended to the entire duration of the program, rather than being created and destroyed each time the function is called.
2.  **Scope:** Its scope remains local to the function where it is declared, meaning it cannot be accessed from outside that function.
3.  **Initialization:** It is initialized only **once**—the first time the function is called. Subsequent calls skip the initialization step.

This combination makes `static` local variables ideal for implementing simple counters, function-call trackers, or thread-safe singletons.

## 💻 Code Implementation: `SharedVariable.cpp`

`SharedVariable.cpp`, implements a simple counter function:

### `counter()` Function

```cpp
void counter() 
{
    static int count = 0; // The static variable
    count++;
	std::cout << "Counter: " << count << std::endl;
}