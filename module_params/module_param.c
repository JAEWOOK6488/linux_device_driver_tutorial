#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Device Driver");
MODULE_DESCRIPTION("Parameter Test Module");


static short int myshort = 1;
static       int myint   = 420;
static long  int mylong  = 9999;
static char    *mystring = "mykernel";


module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "A short integer");

module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myint, "An integer");

module_param(mylong, long, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(mylong, "A long integer");

module_param(mystring, charp, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(mystring, "A character string");

static int __init hello_param_init(void)
{
	
	printk("Hello, world \n");
	printk("myshort short integer: %hd\n", myshort);
	printk("myint is an integer: %d\n", myint);
	printk("mylong long integer: %ld\n", mylong);
	printk("myshort string is a string: %s\n", mystring);
	return 0;
}

static void __exit hello_param_exit(void)
{
	printk("GoodBye, world \n");
}

module_init(hello_param_init);
module_exit(hello_param_exit);
