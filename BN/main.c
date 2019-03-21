#include <stdio.h>
#include <windows.h>

int const Taille =    8    -1;
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
    printf("%c%c%c%c", DHSB,DHSB, DHSB, DHTB);
}

void Grille2() {
    printf("%c", 186);
}

void GrilleMid() {
    printf("%c%c%c%c",205, 205, 205, DC);
}
void GrilleDown(){
    printf("%c%c%c%c", DHSB,DHSB, DHSB, DHBB);
}

int main() {
    int Test=49;
    int Num=49;
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

        SetConsoleOutputCP(437); // For semi-graphic characters
        
        printf("  A   B   C   D   E   F   G   H\n"
               "");
        printf(" ");
        printf("%c", DTLC);
        for (int i = 0; i < Taille; ++i) {

            GrilleTop();
        }
        printf("%c%c%c%c\n", 205,DHSB, 205, DTRC);


        for (int l = 0; l <Taille ; ++l) {

            printf("%c",Num);
            Num++;
            for (int j = 0; j < Taille + 1; ++j) {

                Grille2();
                printf(" %c ",Test);
                Test++;
            }
            printf("%c",186);
            printf("\n");
            printf(" ");
            printf("%c", 204);

            for (int k = 0; k < Taille; ++k) {
                GrilleMid();
            }

            printf("%c%c%c%c\n", 205,205, 205, 185);

        }
        printf("%c",Num);
        Num++;
        for (int j = 0; j < Taille + 1; ++j) {
            Grille2();
            printf(" %c ",Test);
            Test++;
        }

        printf("%c",186);
        printf("\n %c", 200);

        for (int i = 0; i < Taille; ++i) {
            GrilleDown();
        }
        printf("%c%c%c%c",205,205,205,188);
    }


    system("pause");
    system("pause");
    system("cls");
    system("pause");


    return 0;
}
/*
 * for (int k = 0; k < Taille; ++k) {
GrilleMid();
}
    printf("%c%c%c", 205, 205, 185);
 *
 *   printf("\n%c", 204);

 *
 *
 */