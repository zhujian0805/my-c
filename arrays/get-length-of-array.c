/*
 * =====================================================================================
 *
 *       Filename:  array.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月16日 20时40分34秒
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

int main(){
    int array[] = { 1, 3, 2, 4500, 28, 334, 44 };
    int t;
    int i,len;
    len = sizeof(array) / sizeof(array[0]);
    for(i=0; i< 7; i++){
        printf("Array[%d] is: %d\n", i, array[i]);
    }
}
