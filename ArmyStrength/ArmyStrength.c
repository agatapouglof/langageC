#include<stdio.h>
int main(){
    int cases,cas,maxG=0,maxM=0,Ng,Nm,i=0,j=0;
    scanf("%d",&cases);
    for(i;i<cases;i++){
        //printf("\n");
        getchar();
        scanf("%d",&Ng);
        scanf("%d",&Nm);
        for(j;j<Ng;j++){
            scanf("%d",&cas);
            if(cas >maxG) maxG = cas;
        }
       // printf("maxG : %d\n",maxG);
        j=0;
        for(j;j<Nm;j++){
            scanf("%d",&cas);
            if(cas >maxM) maxM = cas;
        }
       // printf("maxM : %d\n",maxM);
        if(maxM > maxG){
            printf("MechaGodzilla\n");
        }else{
            printf("Godzilla\n");
        }
        maxG =0;
        maxM=0;
        j=0;


    }
return 0;
}
