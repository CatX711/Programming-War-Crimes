#include <stdio.h>

// Hello
#define H "H"
#define e "e"
#define l "l"
#define o "o"

// ,
#define comma ","

#define space " "

// world
#define world "world"

//.
#define fullstop "."

int main(){
  printf("%s%s%s%s%s%s%s%s%s\n", H, e, l, l, o, comma, space, world, fullstop);
  return 0;
}


/* Output:

Hello, world.

*/