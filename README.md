For running each module, you should have installed 'make' in your GNU/linux OS.

Navigate to each directory using `cd` and run `make`.

then run this as superuser: `sudo insmod MODULE.ko`. You should change MODULE.ko to what `make` generated for you.

To see the module output checkout `dmesg`.

And to delete module run `sudo rmmod MODULE`
