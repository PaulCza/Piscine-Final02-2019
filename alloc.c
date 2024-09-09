/*
** EPITECH PROJECT, 2019
** alloc
** File description:
** zajdaz
*/
#include <stdlib.h>
#include <stdio.h>

char *alloc(int len)
{
    
    char *memalloc;
    int i;

    i = 0;
    if ((memalloc = (char *) malloc(len * sizeof(char))) == NULL) {
        return (NULL);
    }
    while (i < len) {
        memalloc[i++] = '\0';
    }
    return (memalloc);
}
