#include <stdio.h>
#include <string.h>

extern int g_foo; 

int checkGlobalVar(){
    printf("g_foo : = %d", g_foo);
    return 0;
}