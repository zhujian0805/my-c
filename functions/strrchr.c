/*
 * =====================================================================================
 *
 *       Filename:  strrchr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2018 10:28:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  James Zhu (N/A), zhujian0805@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int
main(int argc, char **argv)
{

    char *_progname;
    char *p;

    p = strrchr(argv[0], '/');

    _progname = (p && p[1]) ? p+1 : argv[0];

    printf("The program is %s \n", p-1);
    printf("The program is %s \n", p);
    printf("The program is %s \n", p+1);
    printf("The program is %s \n", _progname);

}
