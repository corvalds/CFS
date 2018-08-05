//
// Created by CZZ on 2018/8/5.
// Description:
// TODO:
//

#include "create_handler.h"
#include "core.h"
#include "errors.h"

int create_handler(char *args[], int args_num) {
    if (args_num == 0) {
        reset_error_buf(error_msg);
        strcpy(error_msg, TOO_LESS_ARGS);
        return ERRORS_CODE;
    }

    // 第一个元素已经独立传入，故args_num要减1
    return create(args[0], args, args_num - 1);
}