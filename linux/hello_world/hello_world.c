#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE ("GPL");

static int __init hello (void)
{
        printk (KERN_ALERT "Hello World!\n");
        return 0;
}

static void goodbye (void)
{
        printk (KERN_ALERT "Good Bye!\n");
}

module_init(hello);
module_exit(goodbye);