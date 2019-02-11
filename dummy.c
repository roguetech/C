/* File name dummy.c */
//
//

#include <linux/types.h>
#include <linux/module.h>
#include <linux/netfilter.h>

void dummyfn(char *s);

static int __init load_module(void)
{
  printk(KERN_INFO "[IPv4] Successfully inserted dummy module into kernel.\n");
  return 0;
}

static void __exit unload_module(void)
{
  pr_info("unloading dummy module");
  nf_unregister_net_hook(&nfko);

  printk(KERN_INFO "[Dummy] Successfully unloaded dummy module.\n");
}

module_init(load_module);
module_exit(unload_module);
EXPORT_SYMBOL(dummyfn);

#define DRIVER_AUTHOR "DCU ECE"
#define DRIVER_DESC "Dummy loadable module"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);

/*
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT "Hello, world\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
*/
