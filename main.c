#include <stdio.h>
#include "CFS.h"
#include "cmd_handler/cmd_parsing.h"
#include "errors.h"

int main() {
    int ret_code;
    char input_buf[INPUT_BUF_LEN];

    // 初始化命令解析模块
    init_cmd_parsing();

    // 进入主循环
    while(1) {
        // 清空输入缓冲区
        reset_input_buf(input_buf);
        // 获取用户输入
        gets(input_buf);
        // 进行命令解析并调用对应处理函数
        ret_code = cmd_parsing(input_buf);
        // 当运行出错时，打印错误信息
        if (ret_code == ERRORS_CODE) {
            printf("Error: %s\n", error_msg);
            continue;
        }
        // 键入退出命令时，退出系统
        if (ret_code == EXIT_CODE) {
            break;
        }
    }

    return 0;
}