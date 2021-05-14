#include <stdio.h>
#include "a.h"
#include "b.h"
#include "c.h"

#define LIB_NAME "C1.0"

void hello_c(std::string caller) {
    hello_a(LIB_NAME);
    hello_b(LIB_NAME);
    printf("%s => %s\n", caller.c_str(), LIB_NAME);
}
