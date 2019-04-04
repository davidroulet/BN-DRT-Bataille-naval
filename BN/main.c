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
int Donnee[8][8] = {  // Donneée pour la grille
        {4, 3, 3, 3, 0, 2, 2, 0},
        {4, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},};
int LigneC;
int Ligne2;
int ColloneC;
int Collone2;
int B1 = 0;
int B2 = 0;
int B3 = 0;

void Grille() {
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
            if (B1 == 2 && Donnee[Colonne][Lingne] == 12) {
                Donnee[Colonne][Lingne] += 10;
            }
            if (B2 == 3 && Donnee[Colonne][Lingne] == 13) {
                Donnee[Colonne][Lingne] += 10;
            }
            if (B3 == 4 && Donnee[Colonne][Lingne] == 14) {
                Donnee[Colonne][Lingne] += 10;

            }
            printf("%c", 186);

            if (Donnee[Colonne][Lingne] == 0) {
                printf("   ");
            } else if (Donnee[Colonne][Lingne] == 1) {
                printf(" O ");
            } else if (Donnee[Colonne][Lingne] >= 2
                       && Donnee[Colonne][Lingne] < 10) {
                printf("   ");
            } else if (Donnee[Colonne][Lingne] > 10 && Donnee[Colonne][Lingne] < 20) {
                printf(" X ");
            } else if (Donnee[Colonne][Lingne] > 20) {
                printf(" %c ", 219);
            }
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
        if (B1 == 2 && Donnee[Colonne][Lingne] == 12) {
            Donnee[Colonne][Lingne] += 10;
        }
        if (B2 == 3 && Donnee[Colonne][Lingne] == 13) {
            Donnee[Colonne][Lingne] += 10;
        }
        if (B3 == 4 && Donnee[Colonne][Lingne] == 14) {
            Donnee[Colonne][Lingne] += 10;
        }
        printf("%c", 186);
        if (Donnee[Colonne][Lingne] == 0) {
            printf("   ");
        } else if (Donnee[Colonne][Lingne] == 1) {
            printf(" O ");
        } else if (Donnee[Colonne][Lingne] >= 2
                   && Donnee[Colonne][Lingne] < 10) {
            printf("   ");
        } else if (Donnee[Colonne][Lingne] > 10 && Donnee[Colonne][Lingne] < 20) {
            printf(" X ");
        } else if (Donnee[Colonne][Lingne] > 20) {
            printf(" %c ", 219);
        }
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

void menu() {
    int reponce;
    int rep2;
    printf("\nun chiffre pour choisir une action \n1.\tJeux\n2.\tAide\n");
    reponce = _getch();
    while (reponce != 50 && reponce != 49) {
        printf("Un nombre entre 1 et 2 Stp\n");
        reponce = _getch();
    }
    if (reponce == 50) {
        printf("Comment Jouer ?\n Alors le principe est simple il se joue sur un plateau il va y avoir des bateaux adverses que vous allez devoir toucher. Pour cela vous allez devoir choisir une case où tirer, si il y à un bateau à cet endroit cela affichera touché et si il y a de l'eau cela affichera à l'eau l'objetif est de touché tout les bateaux. Une fois que vous avez coulé tout les bateaux, vous avez gagné la partie. \n");
        printf("\n Appuie sur n'importe quelle touche pour revenir au menu\n ");
        rep2 = _getch();
        if (rep2 > 0) {
            menu();
        }
    } else {
        SetConsoleOutputCP(437); // For semi-graphic characters
        Grille();
    }
}

void Tirer() {
    do {
        printf("\nDans quele Colone Voulez tirer? (entre A et H)\n");
        ColloneC = _getch();
    } while (ColloneC < 96 || ColloneC > 105);
    switch (ColloneC) {
        case 97:
            Collone2 = 0;
            break;
        case 98:
            Collone2 = 1;
            break;
        case 99:
            Collone2 = 2;
            break;
        case 100:
            Collone2 = 3;
            break;
        case 101:
            Collone2 = 4;
            break;
        case 102:
            Collone2 = 5;
            break;
        case 103:
            Collone2 = 6;
            break;
        case 104:
            Collone2 = 7;
            break;
    }
    do {
        printf("\nDonner la Ligne sur la quelle vous voulez tire(entre 1 et 8)\n");
        LigneC = _getch();
    } while (LigneC < 48 || LigneC > 58);
    switch (LigneC) {
        case 49:
            Ligne2 = 0;
            break;
        case 50:
            Ligne2 = 1;
            break;
        case 51:
            Ligne2 = 2;
            break;
        case 52:
            Ligne2 = 3;
            break;
        case 53:
            Ligne2 = 4;
            break;
        case 54:
            Ligne2 = 5;
            break;
        case 55:
            Ligne2 = 6;
            break;
        case 56:
            Ligne2 = 7;
            break;
    }
    system("cls");
    if (Donnee[Ligne2][Collone2] == 1 || Donnee[Ligne2][Collone2] > 10) {
        printf("Vous avez deja tirer sur cette case\n\n\n");
    } else if (Donnee[Ligne2][Collone2] == 0) {
        printf("A l'eau\n\n\n");
        Donnee[Ligne2][Collone2]++;
    } else if (Donnee[Ligne2][Collone2] == 2) {
        printf("Touche ");
        B1++;
        Donnee[Ligne2][Collone2] += 10;
        if (B1 == 2) {
            printf("Couler\n\n\n");
        }
    } else if (Donnee[Ligne2][Collone2] == 3) {
        printf("Touche ");
        B2++;
        Donnee[Ligne2][Collone2] += 10;
        if (B2 == 3) {
            printf("Couler\n\n\n");
        }
    } else if (Donnee[Ligne2][Collone2] == 4) {
        printf("Touche ");
        B3++;
        Donnee[Ligne2][Collone2] += 10;
        if (B3 == 4) {
            printf("Couler\n\n\n");
        }
    }
    Grille();
}

int main() {
    SetConsoleOutputCP(65001);
    printf("Bonjour Welcome to the Bataille navale\n ");
    menu();
    while (B1 != 2 || B2 != 3 || B3 != 4) {
        Tirer();
    }
    printf("\nBien jouer tu a fini la partie GG");
    system("pause");
    return 0;
}
// Bataille naval
// David Roulet
// 04.04.2019