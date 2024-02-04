#include <stdio.h>

#define plus_symbol +
#define minus_symbol -
#define asteric *
#define slash /
#define equals_sign =
#define integer int
#define floating_point_number float
#define string str
#define character char
#define variable var
#define newline "\n"

integer main(){
  integer num1 equals_sign 15;
  integer num2 equals_sign 27;
  integer num3 equals_sign 1423;
  integer num4 equals_sign 22;
  
  printf("%d" newline, num1 asteric num2);
  printf("%d" newline, num3 minus_symbol num4);
}
