#include <stdio.h>

#include "hello.h"
#include "goodbye.h"

int main(void) 
{
  printf("Test of Hello Library\n");

  hello_init();
  hello_name("Roger");

  goodbye_init();
  goodbye_name("Roger");
  
  return 0;
}