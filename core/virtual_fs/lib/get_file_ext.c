//
// Created by CZZ on 2018/8/6.
// Description: 获取文件类型（即拓展名）的辅助函数，通过传入的ext返回拓展名
// TODO:
//

#include "get_file_ext.h"
#include "string.h"

// ext应该是一个长度为ext_len的字符数组
int get_file_ext(char *src, char *ext, int ext_len) {
    char *back_ptr = src + strlen(src) - 1; // 获取src最后一个元素地址
    int count = 0;

    // 先将back_ptr指针后退至最近一个分隔符'.'的位置
    while (back_ptr != src && *back_ptr != '.' && *back_ptr != '/') {
        count++;
        back_ptr--;
    }

    // 如果back_ptr不是遇到分隔符停下，则说明该文件没有拓展名
    if (*back_ptr != '.') {
        return NONE_EXTENSION;
    }
    
    // 如果count>ext_len那说明拓展名过长
    if (count > ext_len) {
        return OUTSIZE_EXT_NAME;
    }

    // 从分隔符开始遍历到最后一个字符
    back_ptr++; // 跳过分隔符
    for (int i = 0; i < ext_len && *back_ptr != '\0'; i++, back_ptr++) {
        ext[i] = *back_ptr;
    }

    return FIND_EXTENSION;
}
