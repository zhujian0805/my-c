/*
 * =====================================================================================
 *
 *       Filename:  extern-var-main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月17日 19时51分17秒
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
 
int count ;
extern void write_extern();
 
main() {

       count = 5;
       write_extern();
}
