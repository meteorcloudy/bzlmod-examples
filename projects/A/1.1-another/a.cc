#include <stdio.h>
#include "a.h"

#define LIB_NAME "A1.1 from another registry"

void hello_a(std::string caller) {
    printf("%s => %s\n", caller.c_str(), LIB_NAME);
}
