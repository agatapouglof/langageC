#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char name[300];
    char render[300];
    int length,i=1,j=1;
    scanf("%s",&name);
    length = strlen(name);
    render[0] = name[0];
    for(i;i<length;i++){
        if(name[i] != name[i-1]){
            render[j] = name[i];
            j++;
        }
        
    }
    printf("%s",render);
    
    return 0;
} 
