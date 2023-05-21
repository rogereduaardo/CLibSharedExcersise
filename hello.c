//hello.c

#include <stdio.h>

#include "hello.h"

void hello_init()
{
  //Do any library initialization here
}

void hello_name(const char *name)
{
  printf("Hello %s\n", name);
}