obj-m += test.o
#obj-m += syscall.o
CFLAGS_reverse.o += -DDEBUG

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	/bin/rm -rf *.out
