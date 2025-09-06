#inlcude <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jaewok Jung");
MODULE_DESCRIPTION("Paramerter Test Module");

static short int myshort = 1;
static int myint = 420;
static long int mylong = 9999;
