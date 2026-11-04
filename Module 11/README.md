# Module 11 – Overloading, Templates, and Exception Management

This module covers Chapter 13 (Overloading and Templates) and Chapter 14 (Exception Handling) from *C++ Programming: Program Design Including Data Structures*.

## Discussion

**M11 Discussion.cpp**  
Created a C++ class template named `BankAccount` with an overloaded addition operator and a withdrawal member function using `try`, `throw`, and `catch`. The program intentionally contains two compilation errors: an invalid method call inside the `catch` handler and a nonexistent member-function call in `main()`.

[View discussion program](M11%20Discussion.cpp)

## Programming Assignment

**Chapter 13, Exercise 17 – Random Number Generator with Exception Handling**  
Uses the C++11 `mt19937` generator and `uniform_real_distribution<double>` to generate 25 random real numbers between 10 and 100. Demonstrates exception handling with `try`, `throw`, and `catch` when a generated value falls between 40 and 60, and reports the total number of exceptions caught.

[View assignment program](Ch13Exercise17.cpp)
