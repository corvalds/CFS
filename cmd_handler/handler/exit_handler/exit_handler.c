//
// Created by CZZ on 2018/8/3.
// Description: 实现退出命令
// TODO:
//

#include <stdio.h>
#include <stdlib.h>
#include "exit_handler.h"
#include "CFS.h"

int exit_handler(char *args[], int args_num) {
    printf("dealing with exit command");

    // 释放参数数组占用的内存
    if (args_num != 0) {
        for (int i = 0; i < args_num; i++) {
            if (args[i] != NULL) {
                free(args[i]);
            }
        }
    }

    return EXIT_CODE;
}