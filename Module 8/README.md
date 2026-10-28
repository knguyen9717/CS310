# Module 8 – Classes and Data Abstractions

This module covers Chapter 9 (Records) and Chapter 10 (Classes and Data Abstractions), including structures, classes, access modifiers, member functions, constructors, destructors, and information hiding.

## Discussion

**M8 Discussion.cpp**  
Created a simple C++ program with two classes, `Student` and `Course`. The program contains two intentional compilation errors involving private-member access and an incorrect member-function call for classmates to identify and correct.

[View discussion program](M8%20Discussion.cpp)

## Programming Assignment

**Chapter 10, Exercise 21 – Bank Account Class**  
Implemented a `bankAccount` class that stores the account holder's name, automatically assigned account number, account type, balance, and interest rate (stored as a decimal). The program uses a static member to assign account numbers, an array of ten account objects, and member functions to set account details, deposit, withdraw, add interest, and display account information.

[View assignment program](Ch10Exercise21.cpp)

## Classmate Discussion Reply

**Laack – Two Classes, Two Errors**  
Corrected two compilation errors in a program with `Animal` and derived `Dog` classes: replaced direct access to the dog's private `sound` member with the inherited public `set_sound()` function, and changed the `Animal` object's invalid `set_breed()` call to its valid `set_name()` function.

[View corrected Laack program](ClassmateReply_Laack.cpp)
