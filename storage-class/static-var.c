/*
 * =====================================================================================
 *
 *       Filename:  static-var.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月17日 19时49分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  James Zhu (N/A), zhujian0805@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
 
/*  function declaration */
void func(void);
 
static int count = 5; /*  global variable */
 
main() {

       while(count--) {
                 func();
                    }
        
          return 0;
}

/*  function definition */
void func( void ) {

       static int i = 5; /*  local static variable */
          i++;
          
             printf("i is %d and count is %d\n", i, count);
}
