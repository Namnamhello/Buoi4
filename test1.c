#include <stdio.h>
#include "my_lib.h"

int g_foo =0;

void counter() {
    static int count = 0; // Biến count được khai báo với từ khóa static
    count++;
    g_foo++;
    printf("Count: %d nha \n", count);
}

int main() {
    counter();
    counter();
    counter();
    checkGlobalVar();
    return 0;
}
