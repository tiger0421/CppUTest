#include "mock.h"

int port = 0;
int bit  = 1;

int is_sw_push(){
    return read_sw(port, bit);
}

eStep step_0(eStep current_step ){
    eStep next_step = current_step;
    int flg = is_sw_push();

    if(flg){
        next_step = STEP_1;
    }
    return next_step;
}

eStep step_1(eStep current_step ){
    eStep next_step = current_step;
    int flg = is_sw_push();

    if(flg){
        next_step = STEP_0;
    }
    return next_step;
}

