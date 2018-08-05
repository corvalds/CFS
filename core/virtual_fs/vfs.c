//
// Created by CZZ on 2018/8/5.
// Description: 实现virtual fs的四个功能函数，为上层提供一层抽象
// TODO:
//

#include <stdio.h>
#include "vfs.h"
#include "errors.h"
#include "./lib/includes.h"
#include "config.h"

int create(char *dest, char *args[], int args_num) {
    // 需要注意args[]中的第一个元素即为dest，故遍历args[]要从1开始
    printf("vfs dealing with create command\n");

#ifdef DEBUG_MODE
#ifdef DEBUG_VFS
    printf("--------vfs create args--------\n");
    printf("dest path: %s\n", dest);
    printf("arguments[%d]: ", args_num);
    for (int i = 1; i <= args_num; i++) {
        printf("%s ", args[i]);
    }
    printf("\n--------vfs create args--------\n");
#endif
#endif

    // 先检查dest是否存在
    if (check_path(dest) == PATH_EXIST) {
        reset_error_buf(error_msg);
        strcpy(error_msg, EXISTED_FILE);
        return ERRORS_CODE;
    }

    return DONE_CODE;
}
int write(char *dest, char *args[], int args_num) {

}
int read(char *dest, char *args[], int args_num) {

}
int rm(char *dest, char *args[], int args_num) {

}