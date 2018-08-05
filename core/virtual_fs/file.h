//
// Created by CZZ on 2018/8/5.
// Description: 定义文件、目录项、inode等数据结构
// TODO:
//

#ifndef CFS_FILE_H
#define CFS_FILE_H

#define FILE_NAME_LEN 20
#define BLOCK_SIZE 128 // 根据inode结点大小来定，目前设定一个block正好装得下一个inode

// 定义文件操作
typedef struct {
    int (*create)(inode i, char *args[]);
    int (*write)(inode i, char *args[]);
    int (*read)(inode i, char *args[]);
    int (*remove)(inode i, char *args[]);
} f_op;
// 定义文件操作

// 定义文件类型
#define FILE_TYPE_NAME_LEN 10
typedef struct {
    char name[FILE_TYPE_NAME_LEN];
    f_op fop;
} file_type;
// 定义文件类型

// 定义inode（128字节）
#define PHYSICAL_ADDR_ARRAY_LEN 20
typedef struct {
    unsigned int i_no; // 索引结点编号（从1开始）
    unsigned int i_count; // 引用计数
    file_type *f_type; // 文件类型
    unsigned int f_size; // 文件大小（以字节为单位）
    time_t create_at; // 创建时间
    time_t last_modify_at; // 最近一次修改时间
    unsigned int phy_addr[PHYSICAL_ADDR_ARRAY_LEN]; // 物理地址数组
} inode;
// 定义inode

// 定义目录项（32字节）
#define DENTRY_NAME_LEN FILE_NAME_LEN
typedef struct {
    char name[DENTRY_NAME_LEN]; // 目录项名称（即文件名）
    unsigned int i_no; // 目录项对应的inode结点编号
    dentry *father_dentry; // 父目录的目录项
} dentry;
// 定义目录项

#endif //CFS_FILE_H
