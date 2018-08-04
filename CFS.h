//
// Created by CZZ on 2018/8/3.
// Description: 定义文件系统全局的宏
// TODO:
//

#ifndef CFS_CFS_H

// 使用memset函数
#include <mem.h>

// 状态代码
#define EXIT_CODE 100
// 状态代码

// 输入缓冲区大小
#define INPUT_BUF_LEN 100
// 输入缓冲区大小

// 清空输入缓冲区
#define reset_input_buf(buf) memset(buf, 0, sizeof(char) * INPUT_BUF_LEN)
// 清空输入缓冲区

#define CFS_CFS_H

#endif //CFS_CFS_H
