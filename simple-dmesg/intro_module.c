#include <linux/init.h>
#include <linux/module.h>


static int intro_init(void){

	printk(KERN_ALERT "STARTING:\t Start your new kernel module. \n");
	return 0;
}

static void intro_exit(void){
	printk(KERN_ALERT "STOPPING:\t Stop previous kernel module. \n");
	return 0;
}
module_init(intro_init);
module_exit(intro_exit);

