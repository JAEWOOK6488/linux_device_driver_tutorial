#include <linux/module.h> // 모듈 모듈에 필요
#include <linux/kernel.h> // KERN_ALERT에 필요

int init_module(void)
{
    printk("<1> Hello, world 1. \n");

    // 0이 아닌 반환은 init_module 실패를 의미합니다. 모듈을 로드 할 수 없습니다.
    return 0;
}

void cleanup_module(void)
{
    printk(KERN_ALERT "Goodbye, world 1. \n");
}

MODULE_LICENSE("GPL");