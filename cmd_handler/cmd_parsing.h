//
// Created by CZZ on 2018/8/3.
//

#ifndef CFS_CMD_PARSING_H

// 初始化命令解析模块函数
void init_cmd_parsing();
// 命令解析函数
int cmd_parsing(char *cmd_with_args);

// 命令代码
#define CMD_LS_CODE 0
#define CMD_EXIT_CODE 1
// 命令代码

// 支持的命令数量
#define SUPPORTED_CMD_NUM 2
// 支持的命令数量

// 最长命令字符数
#define MAX_CMD_LEN 7
// 最长命令字符数

// 单个命令的参数上限及参数字符串最大长度
#define MAX_CMD_ARGS 3
#define MAX_CMD_ARG_LEN 20
// 单个命令的参数上限

// 错误信息宏
#define NO_SUCH_CMD "Cannot find the command you type\0"
// 错误信息宏

int (*handlers[SUPPORTED_CMD_NUM])(char *args[], int args_num);
char supported_cmd[SUPPORTED_CMD_NUM][MAX_CMD_LEN];

#define CFS_CMD_PARSING_H

#endif //CFS_CMD_PARSING_H
