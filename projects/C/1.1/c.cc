#include <stdio.h>
// #include "a.h"
#include "b.h"
#include "c.h"

#define LIB_NAME "C1.1"

void hello_c(std::string caller) {
    printf("No dependency on A from C1.1\n");
    hello_b(LIB_NAME);
    printf("%s => %s\n", caller.c_str(), LIB_NAME);
}
