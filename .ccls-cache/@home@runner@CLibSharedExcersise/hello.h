//hello.h - The interface 

#ifndef __HELLO_H__
#define __HELLO_H__

#ifdef __cplusplus
extern "C"
{
#endif

void hello_init();
void hello_name(const char *name);

#ifdef  __cplusplus
}
#endif

#endif