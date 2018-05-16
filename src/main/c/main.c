#include <stdio.h>

#include "public.h"
#include "priv.h"

void greeing() {
    printf("hello world\n");
}


int main() {
    print_internal_msg();
    greeing();
    return 0;
}
