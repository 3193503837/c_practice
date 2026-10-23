#include <stdio.h>
#include <string.h>

// ========== 1. 命令处理函数（统一签名：都接收字符串参数）==========

void do_pwm(const char *arg) {
    printf("PWM 设为 %s\n", arg);
}

void do_led(const char *arg) {
    if (arg != NULL && strcmp(arg, "ON") == 0) {
        printf("LED 已点亮\n");
    } else if (arg != NULL && strcmp(arg, "OFF") == 0) {
        printf("LED 已熄灭\n");
    } else {
        printf("LED 参数错误\n");
    }
}

void do_status(const char *arg) {
    printf("系统正常\n");        // 无参数命令，忽略 arg
}

void do_beep(const char *arg) {
    printf("蜂鸣器鸣响\n");      // 无参数命令，忽略 arg
}

// ========== 2. 命令表 ==========

typedef struct {
    const char *name;                  // 命令名
    void (*handler)(const char *arg);  // 函数指针
} Command;

Command table[] = {
    {"PWM",    do_pwm},
    {"LED",    do_led},
    {"STATUS", do_status},
    {"BEEP",   do_beep},
};

// ========== 3. 主函数：读行 → 拆分 → 查表分发 ==========

int main() {
    char buf[100];
    int table_size = sizeof(table) / sizeof(table[0]);

    while (fgets(buf, sizeof(buf), stdin) != NULL) {
        buf[strcspn(buf, "\n")] = '\0';     // 去换行

        char *cmd = strtok(buf, " ");       // 命令名
        char *arg = strtok(NULL, " ");      // 参数（可能没有）

        if (cmd == NULL) continue;          // 空行，跳过

        // 查表
        int found = 0,i;
        for ( i = 0; i < table_size; i++) {
            if (strcmp(cmd, table[i].name) == 0) {
                table[i].handler(arg);      // 调用对应函数
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("ERROR: 未知命令\n");
        }
    }
    return 0;
}
