#include <stdio.h>
#include <windows.h>
#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center
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

        if (reponce == 2)
            printf("Comment Jouer ?\n Alors le princpe et simple il ce joue sur un plateau il vas avoir des bateau addvers que vous aller devoir touché pour cela vous allez devoir choisir une case ou tiré si il y as un bateau a cette endroit cela affichera touché et si il y as de l eau cela affichera a l'eau l objetif est de touché tout les bateaus une fois que vous avez touché tout les bateaus vous avez ganger la partie \n");
        else{
            printf ("\n\nUne grille basée sur les lignes doubles:\n");
            SetConsoleOutputCP(437); // For semi-graphic characters
            printf ("%c%c%c%c%c%c%c%c%c\n",DTLC,DHSB,DHSB,DHSB,DHTB,DHSB,DHSB,DHSB,DTRC);
            printf ("%c   %c   %c\n",DVSB,DVSB,DVSB);
            printf ("%c%c%c%c%c%c%c%c%c\n",DVLB,DHSB,DHSB,DHSB,DC,DHSB,DHSB,DHSB,DVRB);
            printf ("%c   %c   %c\n",DVSB,DVSB,DVSB);
            printf ("%c%c%c%c%c%c%c%c%c\n",DBLC,DHSB,DHSB,DHSB,DHBB,DHSB,DHSB,DHSB,DBRC);


        }


    return 0;
}