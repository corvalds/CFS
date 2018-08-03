//
// Created by CZZ on 2018/8/3.
// Description: 提供解析命令，并根据解析结果调用特定处理方法的函数
// TODO:
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "cmd_parsing.h"
#include "./handler/handler.h"
#include "errors.h"

void init_cmd_parsing() {
    handlers[CMD_LS_CODE] = ls_handler;
    handlers[CMD_EXIT_CODE] = exit_handler;

    strcpy(supported_cmd[CMD_LS_CODE], "ls\0");
    strcpy(supported_cmd[CMD_EXIT_CODE], "exit\0");
}

int cmd_parsing(char *cmd_with_args) {
    char cmd[MAX_CMD_LEN], *args[MAX_CMD_ARGS], *cursor = cmd_with_args;
    int cmd_code = -1;

    // 获取命令
    int i = 0;
    while(*cursor != ' ' && *cursor != '\0') {
        cmd[i] = *cursor;
        cursor++;
        i++;
    }
    cmd[i] = '\0';

    // 获取命令后面的参数（args_count是从0开始的，但handler中的args_num是从1开始的）
    int args_count = -1;
    while (*cursor != '\0') {
        if (*cursor == ' ') {
            i = 0;
            args_count++;
            // 传入超过三个参数时，只取前三个参数
            if (args_count >= MAX_CMD_ARGS) {
                args_count = 2;
                break;
            }
            args[args_count] = malloc(sizeof(char) * MAX_CMD_ARG_LEN);
            memset(args[args_count], 0, sizeof(char) * MAX_CMD_ARG_LEN);
        }
        args[args_count][i++] = *cursor;
        cursor++;
    }

    // 匹配命令代号
    for (int k = 0; k < SUPPORTED_CMD_NUM; k++) {
        if (!strcmp(cmd, supported_cmd[k])) {
            cmd_code = k;
            break;
        }
    }

    // 如果没有匹配到对应参数则返回并报错
    if (cmd_code == -1) {
        reset_error_buf(error_msg);
        strcpy(error_msg, NO_SUCH_CMD);
        return ERRORS_CODE;
    }

    // 根据命令代号选择处理函数
    return handlers[cmd_code](args, args_count + 1);
}

