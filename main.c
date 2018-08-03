#include <stdio.h>
#include "CFS.h"
#include "cmd_handler/cmd_parsing.h"
#include "errors.h"

int main() {
    int ret_code;
    char error_msg[ERROR_BUF_LEN];
    printf("Hello, World!\n");
    init_cmd_parsing();
    ret_code = cmd_parsing("exit -a -b");
    if (ret_code == ERRORS_CODE) {
        printf("\n%s\n", error_msg);
    }
//    while(1) {
//        ret_code = cmd_parsing("ls");
//        if (ret_code == EXIT_CODE) {
//            break;
//        }
//    }
    return 0;
}