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

integer main(){
  integer num1 equals_sign 15;
  integer num2 equals_sign 27;
  integer num3 equals_sign 1423;
  integer num4 equals_sign 22;
  
  // does this even work??
  printf("%d", num1 asteric num2 "\n");
  printf("%d", num3 minus_symbol num4 "\n");
}
