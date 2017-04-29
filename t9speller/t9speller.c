#include<stdio.h>
#include<string.h>
int spell (char val){
    switch(val){
        case 'a': return 2;
        case 'b': return 22;
        case 'c': return 222;
        case 'd': return 3;
        case 'e': return 33;
        case 'f': return 333;
        case 'g': return 4;
        case 'h': return 44;
        case 'i': return 444;
        case 'j': return 5;
        case 'k': return 55;
        case 'l': return 555;
        case 'm': return 6;
        case 'n': return 66;
        case 'o': return 666;
        case 'p': return 7;
        case 'q': return 77;
        case 'r': return 777;
        case 's': return 7777;
        case 't': return 8;
        case 'u': return 88;
        case 'v': return 888;
        case 'w': return 9;
        case 'x': return 99;
        case 'y': return 999;
        case 'z': return 9999;
        default:  return 0;
    }
}
int main(){
    FILE * fp;
    char * phrase = NULL;
    size_t len = 0;
    ssize_t read = 0;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','z'};
    int speller;
    //char phrase[1109];
    char sortie[5201];
    char temp[5],last;
    int i=0,j=0;
    int cases;
    int taille;//la taille de la chaine saisie par l'utilisateur
    scanf("%d",&cases);
    sortie[0]  = '\0';
    getchar();
    while(j<cases){
     i=0;
    // getchar();
     getline(&phrase,&len,stdin);
     //getchar();
    // gets(phrase);
     taille = strlen(phrase);
     //printf("%s\n  taille %d",phrase,taille);
        for(i;phrase[i+1]!='\0';i++){
            speller = spell(phrase[i]);
            sprintf(temp,"%d",speller);
            taille = strlen(sortie);
            // strcpy(last,temp[taille-1]);
            last = sortie[taille-1];
           // printf("last: %c\n",last);
           // printf("temp: %c\n",temp[0]);
            if(temp[0] == last){
            sprintf(sortie,"%s %d",sortie,speller);
            }else{
            sprintf(sortie,"%s%d",sortie,speller);
            }
           // printf("%d\n",speller);
         }
    printf("Case #%d: %s\n",j+1,sortie);
    sortie[0]='\0';
        j++;
    }
    //free(phrase);
    return 0;
}
