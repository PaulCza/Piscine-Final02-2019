/*
** EPITECH PROJECT, 2019
** resetstr
** File description:
** dfjsz
*/

void resetstr(char *str, int longueur)
{
    int i;

    i = 0;
    while (i < longueur) {
        str[i++] -= '0';
    }
}
