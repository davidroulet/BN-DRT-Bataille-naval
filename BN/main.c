#include <stdio.h>
#include <windows.h>
#include <conio.h>

int const Taille = 8 - 1;
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

void Grille() {
 //   int B1=3;
 //   int DonneeC[8][8] = {
 //           {B1, 0, 0, 0, 0, 0, 0, 0},
 //           {B1, 0, 0, 0, 0, 0, 0, 0},
 //           {B1, 0, 0, 0, 0, 0, 0, 0},
 //           {0, 0, 0, 0, 0, 0, 0, 0},
 //           {0, 0, 0, 0, 0, 0, 0, 0},
//            {0, 0, 0, 0, 0, 0, 0, 0},
 //           {0, 0, 0, 0, 0, 0, 0, 0},
 //           {0, 0, 0, 0, 0, 0, 0, 0},
//
 //   };
    int Donnee[8][8] = {  // Donneée pour la grille
            {0, 0, 0, 0, 0, 88, 0, 0},
            {0, 0, 0, 0, 0, 88, 111, 0},
            {254, 254, 254, 0, 0, 88, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 111, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 111, 0, 0, 0, 0},

    };
    SetConsoleOutputCP(437); // For semi-graphic characters
    int Lingne = 0; // Ligne pour l'affichage
    int Colonne = 0; // Colone pour l'affichage
    int Num = 1;
    printf("  A   B   C   D   E   F   G   H\n"); // Ligne de caratcre pour definir les collones
    printf(" ");
    printf("%c", DTLC);
    for (int i = 0; i < Taille; ++i) {

        printf("%c%c%c%c", DHSB, DHSB, DHSB, DHTB); //
    }
    printf("%c%c%c%c\n", 205, DHSB, 205, DTRC);


    for (int l = 0; l < Taille; ++l) {

        printf("%d", Num);
        Num++;
        for (int j = 0; j < Taille + 1; ++j) {

            printf("%c", 186);
            printf(" %c ", Donnee[Colonne][Lingne]);
            Lingne++;
            if (Lingne > 7) {
                Lingne = 0;
                Colonne++;
            }
        }
        printf("%c", 186);
        printf("\n");
        printf(" ");
        printf("%c", 204);

        for (int k = 0; k < Taille; ++k) {
            printf("%c%c%c%c", 205, 205, 205, DC);
        }

        printf("%c%c%c%c\n", 205, 205, 205, 185);

    }
    printf("%d", Num);
    for (int j = 0; j < Taille + 1; ++j) {
        printf("%c", 186);

        printf(" %c ", Donnee[Colonne][Lingne]);
        Lingne++;
        if (Lingne > 7) {
            Lingne = 0;
            Colonne++;
        }
    }

    printf("%c", 186);
    printf("\n %c", 200);

    for (int i = 0; i < Taille; ++i) {
        printf("%c%c%c%c", DHSB, DHSB, DHSB, DHBB);
    }
    printf("%c%c%c%c", 205, 205, 205, 188);
}
void menu(){
    int reponce;
    int rep2;
    printf("\nun chiffre pour choisir une action \n1.\tJeux\n2.\tAide\n");
    reponce=_getch();
    while (reponce != 50 && reponce != 49) {
        printf("Un nombre entre 1 et 2 Stp\n");
        reponce=_getch();
    }
    if (reponce == 50) {
        printf("Comment Jouer ?\n Alors le principe est simple il se joue sur un plateau il va y avoir des bateaux adverses que vous allez devoir toucher. Pour cela vous allez devoir choisir une case où tirer, si il y à un bateau à cet endroit cela affichera touché et si il y a de l'eau cela affichera à l'eau l'objetif est de touché tout les bateaux. Une fois que vous avez coulé tout les bateaux, vous avez gagné la partie. \n");
        printf("\n Appuie sur n'importe quelle touche pour revenir au menu\n ");
        rep2=_getch();
        if (rep2>0){
            menu();
        }
    }
    else {
        SetConsoleOutputCP(437); // For semi-graphic characters
        Grille();
    }
}
int main() {

    SetConsoleOutputCP(65001);
    int reponce;
    printf("Bonjour Welcome to Bataille navale\n ");
menu();


//    printf("\n");
//    printf("Dans qulle Ligne Voulez Vous Tiré");
//    int Choix=0;
//    scanf("%d",&Choix);


    system("pause");
    system("pause");
    system("cls");


    return 0;
}
// Bataille naval
// David Roulet
// 25.03.2019