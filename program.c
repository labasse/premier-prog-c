#include <stdio.h>


// Je peux écrire ce que je veux
/*
    Un
    commentaire 
    sur 
    plusieurs lignes
*/



int main() 
{
    int a; // Déclaration d'une variable de type entier
    int x0;
    int x, position_y = 0;

    a = -12; // Affectation de -12 dans a (a vaudra -12)
    a = 5;

    int b = -5, c = 8, d = 125;

    printf("+------------------------+\n"); // Antislash n = Nouvelle ligne
    printf("| Mémoire : %4d et %4d |\n", a, b);
    printf("| c et d :  %04d et %04d |\n", c, d);
    printf("+------------------------+\n");
    return 0;
}
