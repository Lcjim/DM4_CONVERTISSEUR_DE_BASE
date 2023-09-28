#include <stdio.h>
int convertirBase(char NOMBRE,int baseOrigine,int baseCible){
    long strtol(const char *nptr,int baseOrigine , int  baseCible);
    if (baseCible != 2 && baseCible != 10 && baseCible != 16) {
        printf("se cible invalide. Utilisez 2, 10 ou 16.");
    }
    if (baseCible == 2){


    }

}
int main(){
    int baseOrigine;
    char NOMBRE;
    int baseCible

    printf("donner un nombre en chaine de charactere:");
    scanf("%s",&NOMBRE);
    getchar();
    printf("donner sa base d'origine: \n");
    scanf("%d",&baseOrigine);
    getchar();
    printf("puis donner la base cible dans laquelle tu vas convertir: \n");
    scanf("%d",&baseCible);
    getchar();
    printf("le nombre %s en %d est équivalent à %d",NOMBRE, baseOrigine, baseCible);
    return 0;
}
