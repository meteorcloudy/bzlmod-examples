#include <stdio.h>
// #include "a.h"
#include "b.h"

#define LIB_NAME "B1.2"

void hello_b(std::string caller) {
    printf("No dependency on A from B1.2\n");
    printf("%s => %s\n", caller.c_str(), LIB_NAME);
}
