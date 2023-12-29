#include "mystruct.h"

int main() {
    mystruct_t m = makestruct(1, 2, 3);
    // we cannot access data of mystruct_t: 
    // m->a; pointer to incomplete class type "struct mystruct" is not allowed
    // but mystruct.c can!
    printstruct(m);
    return 0;
}