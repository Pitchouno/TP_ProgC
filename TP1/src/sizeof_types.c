#include <stdio.h> // Inclusion de la bibliothèque pour les fonctions d'entrée/sortie comme printf()

/*
 * Programme : sizeof_types.c
 * Auteur : (Votre nom)
 * Date : 24 octobre 2025
 * Description : Affiche la taille en octets des types de données de base en C.
 */
int main() {

    // --- Types caractères ---
    // i. char
    // Note : 'char' peut être 'signed' ou 'unsigned' par défaut selon le compilateur.
    printf("Taille de char : %zu octet(s)\n", sizeof(char));
    printf("Taille de signed char : %zu octet(s)\n", sizeof(signed char));
    printf("Taille de unsigned char : %zu octet(s)\n", sizeof(unsigned char));
    printf("\n"); // Ajoute un saut de ligne pour la lisibilité

    // --- Types entiers courts ---
    // ii. short
    printf("Taille de short (ou signed short) : %zu octet(s)\n", sizeof(short));
    printf("Taille de unsigned short : %zu octet(s)\n", sizeof(unsigned short));
    printf("\n");

    // --- Types entiers ---
    // iii. int
    printf("Taille de int (ou signed int) : %zu octet(s)\n", sizeof(int));
    printf("Taille de unsigned int : %zu octet(s)\n", sizeof(unsigned int));
    printf("\n");

    // --- Types entiers longs ---
    // iv. long int
    printf("Taille de long int (ou signed long int) : %zu octet(s)\n", sizeof(long int));
    printf("Taille de unsigned long int : %zu octet(s)\n", sizeof(unsigned long int));
    printf("\n");

    // --- Types entiers très longs ---
    // v. long long int
    printf("Taille de long long int (ou signed long long int) : %zu octet(s)\n", sizeof(long long int));
    printf("Taille de unsigned long long int : %zu octet(s)\n", sizeof(unsigned long long int));
    printf("\n");

    // --- Types flottants ---
    // Note : Il n'y a pas de 'unsigned' ou 'signed' pour les types flottants.
    
    // vi. float
    printf("Taille de float : %zu octet(s)\n", sizeof(float));

    // vii. double
    printf("Taille de double : %zu octet(s)\n", sizeof(double));

    // viii. long double
    printf("Taille de long double : %zu octet(s)\n", sizeof(long double));

    // La fonction main() retourne 0 pour indiquer au système
    // que le programme s'est terminé sans erreur.
    return 0;
}
