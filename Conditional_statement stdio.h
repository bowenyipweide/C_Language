#include <stdio.h>
#include <cs50.h>

if (boolean-expression)
{
  
}
else 
{
  
}

#Nesting conditional 
if (boolean-expr1)
{
  // First branch
}
else if (boolean-expr2)
{
  // Second branch
}
else if (boolean-expr3)
{
  // Third branch 
}
else 
{
  // Fourth branch 
}

#Important to put a break, you will fall through
int x = Getint();
switch(x)
{
  case 1:
    printf("One!\n");
    break;
  case 2:
    printf("Two!\n");
    break;
   case 3:
    printf("Three!\n");
    break;
   defalut:
    printf("sorry! \n");
}
    
    
