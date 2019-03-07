#include <stdio.h>
#include <windows.h>
#pragma execution_character_set("utf-8")
int main() {
    SetConsoleOutputCP(65001);
    int reponce;
    printf("Bonjour Welcome to Bataille naval\n Donner un chiffre pour choisir une action \n1.\tJeux\n2.\tAide\n");

        scanf("%d", &reponce);
        while (reponce!=2&&reponce!=1)
        {
            printf("un nombre entre 1 et 2 Stp");
            scanf("%d", &reponce);
        }
    if (reponce == 2 || reponce == 1) {
        if (reponce == 2)
            printf("Comment Jouer ?\n Alors le princpe et simple il ce joue sur un plateau il vas avoir des bateau addvers que vous aller devoir touché pour cela vous allez devoir choisir une case ou tiré si il y as un bateau a cette endroit cela affichera touché et si il y as de l eau cela affichera a l'eau l objetif est de touché tout les bateaus une fois que vous avez touché tout les bateaus vous avez ganger la partie \n");
        else
            printf("jeux");
    }
    return 0;
}