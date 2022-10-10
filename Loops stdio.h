#include <stdio.h>

#forever loop
while (true)
{
  
}

#If the boolean-expr evaluates to true, all lines of code between the curly braces will execute repeatedly, in order from top-to-bottom, until boolean-expr evaluates to false
while (boolean-expr)
{
  
}


#This loop will execute all lines of code between the curly braces once, and then if the boolean-expr evaluates to true, will go back and repeat that process until boolean-expr evaluates to false
do 
{
  
}
while (boolean-expr);

#Syntactically unattractive, but for loops are used to repeat the body of a loop a specified number of times, in this example 10.
# The process undertaken in a for a loop is:
  #Counter variable(s) (here,i) is set
  #Boolean-expr checked.
    #If it evaluates true, the body of the loop executes.
    #If it evaluates false, the body of the loop does not executes.
for (int i = 0; i < 10; i++)
{
  
}

#Another example

for (start; expr; increment)
{

}
