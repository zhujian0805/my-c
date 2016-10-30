/* make the page writable */
int make_rw(unsigned long address)
{        unsigned int level;
        pte_t *pte = lookup_address(address, &level);//查找虚拟地址所在的页表地址
        if (pte->pte & ~_PAGE_RW) //设置页表读写属性
                pte->pte |=  _PAGE_RW; 
       return 0;
}

/* make the page write protected */
int make_ro(unsigned long address)
{        unsigned int level;
        pte_t *pte = lookup_address(address, &level);
        pte->pte &= ~_PAGE_RW; //设置只读属性

        return 0;
}

asmlinkage long hacked_mkdir(const char __user *pathname, int mode)
{
        printk("mkdir pathname: %s\n", pathname);
        printk(KERN_ALERT "mkdir do nothing!\n");     
      return 0;
       /*everything is ok, but he new systemcall does nothing*/
}

static int syscall_init_module(void)
{
        printk(KERN_ALERT "sys_call_table: 0x%p\n", sys_call_table);
        orig_mkdir = (unsigned long *)(sys_call_table[__NR_mkdir]);
        //获取原来的系统调用地址
        printk(KERN_ALERT "orig_mkdir: 0x%p\n", orig_mkdir);

        make_rw((unsigned long)sys_call_table); //修改页属性
        sys_call_table[__NR_mkdir] = (unsigned long *)hacked_mkdir;
       //设置新的系统调用地址
        make_ro((unsigned long)sys_call_table);    
        return 0;
}

static void syscall_cleanup_module(void)
{
        printk(KERN_ALERT "Module syscall unloaded.\n");

        make_rw((unsigned long)sys_call_table);
        sys_call_table[__NR_mkdir] = (unsigned long *)orig_mkdir;        /*set mkdir syscall to the origal one*/
        make_ro((unsigned long)sys_call_table);
}

module_init(syscall_init_module);
module_exit(syscall_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("hack syscall");
