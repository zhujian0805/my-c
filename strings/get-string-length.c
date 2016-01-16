/*
 * =====================================================================================
 *
 *       Filename:  get-string-length.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月16日 21时20分45秒
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
    char s[] = "abcdefg";
    int i, len;
    len = sizeof(s);
    printf("The length of s is %d\n", len);
    for(i=0;i<len;i++){
        printf("The %dth element is: %c\n", i, s[i]);
    }
}
