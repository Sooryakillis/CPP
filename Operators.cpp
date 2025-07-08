// Arithmetic Operators

// +	Addition	
// -	Subtraction	
// *	Multiplication	
// /	Division
// %	Modulus	
// ++	Increment
// --	Decrement


// Operator	Description
// &	        Bitwise AND Operator
// |	        Bitwise OR Operator
// ^	        Bitwise XOR Operator
// ~	        Bitwise Complement Operator
// <<	        Bitwise Shift Left Operator
// >>	        Bitwise Shift Right Operator

// Assignment operators

// Operator	Example 	Same As	
// =	        x = 5	    x = 5	
// +=	        x += 3	    x = x + 3	
// -=	        x -= 3	    x = x - 3	
// *=	        x *= 3	    x = x * 3	
// /=	        x /= 3	    x = x / 3	
// %=	        x %= 3	    x = x % 3	
// &=	        x &= 3	    x = x & 3	
// |=	        x |= 3	    x = x | 3	
// ^=	        x ^= 3	    x = x ^ 3	
// >>=	        x >>= 3	    x = x >> 3	
// <<=	        x <<= 3	    x = x << 3


// Comparison operators

// Operator	Name	                    Example	
// ==	        Equal to	                x == y	
// !=	        Not equal	                x != y	
// >	        Greater than	            x > y	
// <	        Less than	                x < y	
// >=	        Greater than or equal to	x >= y	
// <=	        Less than or equal to	    x <= y


// Logical Operators

// Operator	Name	            Description	                                                Example	
// && 	        Logical and	        Returns true if both statements are true	                x < 5 &&  x < 10	
// || 	        Logical or	        Returns true if one of the statements is true	            x < 5 || x < 4	
// !	        Logical not	        Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)

#include<iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
#include<string>
using namespace std; 

int main()
{
	//////////////////////////////
	int number1 = 10;
	int number2 = 20;

	int total;
	total = number1+number2;
	
	double average = total / 2.0;
	
	std::cout <<"The avg of tow numbers :"<<average<< std::endl;
	std::cout <<"The Total of tow numbers :"<<total<< std::endl;

	return 0;
}