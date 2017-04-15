obj-m += intro_module.o

KDIR = /usr/src/linux-headers-`uname -r`

all:

	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.orders
