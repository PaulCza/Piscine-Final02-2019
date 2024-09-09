/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** bah l'infinadd
*/

void infinadd(char *nb1, char *nb2, char *result)
{
    int backup; int longueur1;
    int longueur2; int position;

    longueur1 = my_strlen(nb1);
    longueur2 = my_strlen(nb2);
    result = alloc(longueur1 + 1);
    resetstr(nb1, longueur1);
    resetstr(nb2, longueur2);
    backup = longueur1;
    position = longueur1;
    longueur1 = longueur1 - 1;
    longueur2 = longueur2 - 1;
    while (position > 0){
        result[position] += nb1[longueur1] + (longueur2 < 0 ? 0 : nb2[longueur2]);
        result[position - 1] = result[position] / 10;
        result[position] = result[position] % 10;
        position = position - 1;
        longueur1 = longueur1 - 1;
        longueur2 = longueur2 - 1;
    }
    show_result_to_char(result, backup + 1);
}
