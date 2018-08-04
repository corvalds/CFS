//
// Created by CZZ on 2018/8/3.
// Description: 定义错误代码
// TODO:
//

#ifndef CFS_ERRORS_H

// 使用memset函数
#include <mem.h>

// 错误信息缓冲区大小
#define ERROR_BUF_LEN 50
// 错误信息缓冲区大小

// 初始化错误缓冲区的函数宏
#define reset_error_buf(buf) memset(buf, 0, sizeof(char) * ERROR_BUF_LEN)
// 初始化错误缓冲区的函数宏

// 定义错误缓冲区
char error_msg[ERROR_BUF_LEN];
// 定义错误缓冲区

// 整形函数返回码
#define DONE_CODE 0
#define ERRORS_CODE -1
// 整形函数返回码

#define CFS_ERRORS_H

#endif //CFS_ERRORS_H
