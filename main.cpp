/*
 File: classworkfeb11.cpp
 Programmer: Weslee Smith
 Date: 02 Feb 26
 Requirements: Sum of two numbers. Write a program that stores the intergers 50 and 100 in variables,
 and stores the sum of these two in a variable named sum.
 Display the result.
 1. Create 3 varibles.
 2. Assign with values 50 and 100.
 3. Add the two varibles values and store the third
 */

#include <iostream>
using namespace std;
int main()
{
 int number1, number2, sum;
 number1 = 50;
 number2 = 100;
 sum = number1 + number2;
 cout << "The first number that you entered is " << number1 << endl;
 cout << "The second number that you entered is " << number2 << endl;
 cout << "The sum of these numbers is " << sum << endl;

 //cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;
}