#include <stdio.h>

// Hello
char H = "H"
char e = "e"
char l = "l"
char o = "o"

// ,
char comma = ","

// this is self explanitory lmao
char space = " "

// world
char world[5] = "world"

//.
char fullstop = "."

int main(){
  printf("%c%c%c%c%c%c%s%c%c\n", H, e, l, l, o, comma, space, world, fullstop);
  return 0;
}


/* Output:

Hello, world.

*/
