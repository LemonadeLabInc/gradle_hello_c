#include <stdio.h>

#include "hello.h"
#include "priv.h"


int main() {
    print_internal_msg();
    greeting();
    return 0;
}
