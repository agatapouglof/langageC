#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NMAX  250
typedef char phrase[NMAX];
void miroir(phrase* dest,phrase phr){
    int j=0;
    for(int i=strlen(phr)-1;i>=0;i++){
        dest[j] = phr[i];
        j++;
    }
}
            
int main (){
    /*
     *ffonction mirior range le mot inverser dans une autre variable entre
     *for (int i=0; i<n; i++) {
    printf("Nom %d : ",i+1);
    char buffer[TAILLE_BUFFER];
    fgets(buffer, TAILLE_BUFFER, stdin);
    buffer[strlen(buffer)-1]='\0';  // enlève le '\n' à la fin
    nom[i]=malloc(strlen(buffer)+1);
    if (nom[i] == NULL) {
        fputs(stderr,"Erreur d'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    strcpy(nom[i], buffer);
}


     * */
    phrase phr;
    //char val [120] ;
    fgets(phr,NMAX,stdin);
    phr[strlen(phr)-1]= '\0';
  // char dest[strlen(phr)+1];
    phrase dest;
    miroir(&dest,phr);
    printf("%s\n",*dest);
    return 0;
}
