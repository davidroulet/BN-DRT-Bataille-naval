#include <stdio.h>
#include <windows.h>

int const Taille = 7;
#define DTLC 201 // ╔, Double Top Left Corner
#define DTRC 187 // ╗, Double Top Right Corner
#define DBLC 200 // ╚, Double Bottom Left Corner
#define DBRC 188 // ╝, Double Bottom Right Corner
#define DVSB 186 // ║, Double Vertical Simple Border
#define DVRB 185 // ╣, Double Vertical Right Border
#define DVLB 204 // ╠, Double Vertical Left Border
#define DHSB 205 // ═, Double Horizontal Simple Border
#define DHBB 202 // ╩, Double Horizontal Bottom Border
#define DHTB 203 // ╦, Double Horizontal Top Border
#define DC   206 // ╬, Double Center
#pragma execution_character_set("utf-8")

void GrilleTop() {
    printf("%c%c%c", DHSB, DHSB, DHTB);
}

void Grille2() {
printf("%c",186);
}
void GrilleMid(){

    printf("%c%c%c",205,205,206);
}
int main() {
    SetConsoleOutputCP(65001);
    int reponce;
    printf("Bonjour Welcome to Bataille naval\n Donner un chiffre pour choisir une action \n1.\tJeux\n2.\tAide\n");

    scanf("%d", &reponce);
    while (reponce != 2 && reponce != 1) {
        printf("un nombre entre 1 et 2 Stp");
        scanf("%d", &reponce);
    }

    if (reponce == 2)
        printf("Comment Jouer ?\n Alors le princpe et simple il ce joue sur un plateau il vas avoir des bateau addvers que vous aller devoir touché pour cela vous allez devoir choisir une case ou tiré si il y as un bateau a cette endroit cela affichera touché et si il y as de l eau cela affichera a l'eau l objetif est de touché tout les bateaus une fois que vous avez touché tout les bateaus vous avez ganger la partie \n");
    else {
        printf("\n\nUne grille basée sur les lignes doubles:\n");
        SetConsoleOutputCP(437); // For semi-graphic characters
        printf("A B C D E F G H\n"
               "");

        printf("%c", DTLC);
        for (int i = 0; i < Taille; ++i) {

            GrilleTop();

        }
        printf("%c%c%c\n", DHSB, 205, DTRC);
        for (int k = 0; k < 4; ++k) {


            for (int j = 0; j < Taille + 2; ++j) {
                Grille2();
                printf("  ");
            }


            printf("\n%c", 204);
            for (int k = 0; k < Taille; ++k) {
                GrilleMid();
            }
            printf("%c%c%c", 205, 205, 185);
        }
    }


    system("pause");
    system("pause");
    system("cls");
    system("pause");


    return 0;
}