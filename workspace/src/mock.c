#include "mock.h"

const int port = 0;
const int bit  = 1;

int is_sw_push(){
    return read_sw(port, bit);
}

