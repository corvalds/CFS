//
// Created by CZZ on 2018/8/3.
// Description: 处理ls命令的函数
// TODO:
//

#include <stdio.h>
#include <stdlib.h>
#include "ls_handler.h"
#include "errors.h"

int ls_handler(char *args[], int args_num) {
    printf("dealing with ls command");

    // 释放参数数组占用的内存
    if (args_num != 0) {
        for (int i = 0; i < args_num; i++) {
            if (args[i] != NULL) {
                free(args[i]);
            }
        }
    }

    return DONE_CODE;
}