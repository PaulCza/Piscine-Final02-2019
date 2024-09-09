/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** dkazd
*/

int main(int ac, char *argv[])
{
    char *result;

    if (ac > 2){
        infinadd(argv[1], argv[2]);
    }
    my_putchar('\n');
    return (0);
}
