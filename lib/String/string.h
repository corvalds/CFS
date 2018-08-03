//
// Created by CZZ on 2018/8/3.
// Description: 定义数据结构String
// TODO:
//

#ifndef CFS_STRING_H
typedef struct {
    char *ptr;
    unsigned int length;
} String;

// 创建一个字符串
String *string_new(char *str);
// 改变字符串第i个字符的值
int string_change(String *str, int i, char value);
// 销毁字符串
void string_delete(String *str);
#define CFS_STRING_H

#endif //CFS_STRING_H
