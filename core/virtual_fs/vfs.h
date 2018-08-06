//
// Created by CZZ on 2018/8/5.
// Description: 定义virtual fs的行为
// TODO:
//

#ifndef CFS_VFS_H
#define CFS_VFS_H

// 定义功能函数
int create(char *dest, char *args[], int args_num);
int write(char *dest, char *args[], int args_num);
int read(char *dest, char *args[], int args_num);
int rm(char *dest, char *args[], int args_num);
// 定义功能函数

// 定义vfs中的错误语句
#define EM_EXISTED_FILE "Target file is already existed."
#define EM_OUTSIZE_EXT_NAME "File extension is too long"
#define EM_NONE_EXTENSION "Extension must be exist"
// 定义vfs中的错误语句

#endif //CFS_VFS_H
