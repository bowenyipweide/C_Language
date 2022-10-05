# C_Language

#include <stdio.h>
int main()
{
  // printf() displays the string inside quotation
  printf("Hello, World!");
  return 0;
}


#Int
The int data type is used for variable that will store intergers. 
Intergers always take up to 4 bytes of memeory(32bits). This means the range of values they can store is neccessarily limited to 32 bits worth of information.
-2^31 to 0 to 2^31

#unsigned int
unsigned is a qualifer that can be appplied to certain types(including int), which effecitively doubles the positive range of variable of that type, at the cost of disallowing in any negative values.

#Char 
The char data types is used for variable that will store single characters.
Characters alwaysd take up to 1 byte of memory(8bits). This means the ranfe of values they can store is necessarily limited to 8 bits worth of information 
-128 to 0 to 127

#Float
The float data types is used for variable that will store floating-point values, also known as real-numbers.
floating points value always take up 4 bytes of memeory (32bits).
3.14159

#double 
The double data type is used for variable that will store floating-point values known as rwal numbers 
the difference is that doubles are double precision. they can always take up 8 bytes of memory (64 bits). extra 32bits to be more precise 

#void 
is a type, but not a data types
funcaitons can have a void return type, which just means they don't return a value

#bool 
r+The bool data type is used for variable that will store a boolean value. More precisely, they are capable only of storing one of two values: True and False 

#string 
The string data types is used for variable that will store of characters, which programmers typically called a <string>.

#Creating a varibale 
int number;
char letter;

int number; // declaration 
number = 12; // assignment 
char letter; //declaration 
letter = 'H'; //assignment 

int number = 17; //initialization 
char letter = 'H'; // initiallization 

