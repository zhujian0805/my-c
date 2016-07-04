####################################[NOTEs]#########################################
# https://wiki.archlinux.org/index.php/udev#Loading_new_rules
# https://docs.oracle.com/cd/E37670_01/E41138/html/ch07s04.html
# http://blog.jobbole.com/72115/
#
# https://linux.cn/article-3251-1.html
####################################################################################

# Reload udev rules
udevadm control --reload-rules

# Fomd things in kernel source codes
root@jzhu-HP-Z400-Workstation:/usr/src/linux-headers-4.4.0-28-generic# make cscope && cscope


# Compile and Run
$ make
$ sudo insmod reverse.ko buffer_size=2048
$ lsmod