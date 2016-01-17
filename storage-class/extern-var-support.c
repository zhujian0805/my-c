/*
 * =====================================================================================
 *
 *       Filename:  extern-var-support.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月17日 19时51分45秒
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
 
extern int count;
 
void write_extern(void) {
       printf("count is %d\n", count);
}
