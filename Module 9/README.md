# Module 9 – Inheritance and Composition

This module focuses on Chapter 11 of *C++ Programming: Program Design Including Data Structures*, including base and derived classes, public/protected/private inheritance, constructors and destructors in derived classes, and composition.

## Discussion

**M9 Discussion.cpp**  
Created a C++ program with an `Employee` base class and two derived classes, `Manager` and `Technician`. The program intentionally contains two compilation errors related to private-member access and calling a member function on the wrong derived class for classmates to debug.

[View discussion program](M9%20Discussion.cpp)

## Programming Assignment

**Chapter 11, Exercise 13 – Bank Account Inheritance**  
Implemented a `bankAccount` base class for account numbers, balances, deposits, withdrawals, and account details. Derived `checkingAccount` and `savingsAccount` classes add specialized features, including interest rates, minimum balances, service charges, writing checks, posting interest, and overridden withdrawal methods. The `main()` function demonstrates both account types.

[View assignment program](Ch11Exercise13.cpp)

## Classmate Discussion Reply

**Laack – Subclass Consciousness!**  
Corrected invalid direct access to private `Employee` data members in the `Manager` constructor by using a base-class constructor initializer list, and supplied the missing name argument when creating an `Employee` object.

[View corrected Laack program](ClassmateReply_Laack.cpp)
