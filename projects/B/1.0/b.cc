#include <stdio.h>
#include "a.h"
#include "b.h"

#define LIB_NAME "B1.0"

void hello_b(std::string caller) {
    hello_a(LIB_NAME);
    printf("%s => %s\n", caller.c_str(), LIB_NAME);
}
