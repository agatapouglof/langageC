#include<stdio.h>
int main(){
    int l1,l2,i=0,j=0,cases,cas,res1=0,res2=0;
    int tubes[3000];
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&cases);
    for(i;i<cases;i++){    
    scanf("%d",&tubes[i]);       
    
    }
    i=0;
    for(i;i<cases-1;i++){
         j=i+1;
        for(j;j<cases;j++){
            cas = tubes[i] + tubes[j];
            if (cas <=l1 && cas>res1){ res1 = cas;}
            else{
                if (cas <=l2 && cas>res2){ res2 = cas;}
            }
        }
    
    }
    if(res1 !=0 && res2 !=0){
         printf("%d",res1+res2);
    }else{
        printf("Impossible");
    }
 return 0;
}
