/*
** EPITECH PROJECT, 2019
** print_result
** File description:
** bah... print le resultat de l'addition
*/

void show_result_to_char(char *str, int longueur)
{
    int a;
    int i;

    a = 0;
    i = 0;
    while (i < longueur) {
        if (a || str[i] != 0 || i + 1 == longueur) {
            my_putchar(str[i] + '0');
            a = 1;
        }
        i = i + 1;
    }
}
