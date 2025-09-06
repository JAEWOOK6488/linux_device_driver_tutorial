#include <linux/module.h> // 모든 모듈에 필요
#include <linux/kernel.h> // KERN_ALERT에 필요
#include <linux/init.h> // 매크로에 필요

static int hello_2_init(void)
{
    printk(KERN_ALERT "Hello, world 2. \n");
    return 0;
}

static void hello_2_exit(void)
{
    printk(KERN_ALERT "Goodbye, world 2. \n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");