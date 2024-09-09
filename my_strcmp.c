/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** dazdzj
*/

int my_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    if (my_strlen(s1) < my_strlen(s2)){
        return (-1);
    }
    if (my_strlen(s1) > my_strlen(s2)){
        return (1);
    }
    while (s1[i] && s2[i] && s1[i] == s2[i]){
        i = i + 1;
    }
    return (s1[i] - s2[i]);
}
