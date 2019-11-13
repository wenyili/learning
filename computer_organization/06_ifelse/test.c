/*
$ gcc -g -c test.c
$ objdump -d -M intel -S test.o
*/

#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(NULL));
  int r = rand() % 2;
  int a = 10;
  if (r == 0)
  {
    a = 1;
  } else {
    a = 2;
  } 
}
