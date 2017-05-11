#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pigTalk(char *word){
    char voy[7] = "aeiouy";
     int i=0,length = strlen(word);
     char * ret; //la partie apres la voyelle inclut 
     char front[31] = "",rendu[50];
     while(strchr(voy,word[i]) == NULL) {
         sprintf(front,"%s%c",front,word[i]);
         i++;
     }

     ret = strchr(word,word[i]); 
     if(i==0){ 
     sprintf(word,"%syay",word);
     }else{ 
     sprintf(word,"%s%say",ret,front);
     }
}  
int main(){
    char * line = NULL;
    char *token,ch;
    char val[50];
    char render[10000];
    int longeur;
    size_t len = 0;
     getline(&line,&len,stdin);
    while(!feof(stdin)){
        longeur = strlen(line);
        line[longeur-1]= '\0';
        token = strtok(line," ");
        sprintf(val,"%s",token);
        pigTalk(val);
        sprintf(render,"%s",val);
        token = strtok(NULL," ");
        while(token != NULL){
            longeur = strlen(token);
            sprintf(val,"%s",token);
            pigTalk(val);
            sprintf(render,"%s %s",render,val);
            token = strtok(NULL," ");
        }
        printf("%s\n",render);
        getline(&line,&len,stdin);
    }
 return 0;
}










