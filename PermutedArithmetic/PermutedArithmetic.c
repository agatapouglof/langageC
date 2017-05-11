#include<stdio.h>

int main(){
    long tab[101];
    int cases,n,i=0,j=0,k=0;
    long min,temp,diff;
    int art,part; // boolean for arithmetic or permuted arithmetic
    scanf("%d",&cases);
    for(i;i<cases;i++){
        j=0;
        scanf("%d",&n);
        for(j;j<n;j++){
            scanf("%ld",&tab[j]);
        }
        art = 1;
        diff=tab[0] - tab[1];
        j=1;
        for(j;j<n-1;j++){
            temp = tab[j]- tab[j+1];
            if(temp != diff){
                art = 0;
            }
        
        }
        
         if(!art){
             j=1;
             temp= -temp;
             art =1;
             for(j;j<n-1;j++){
                 temp = tab[j]- tab[j+1];
                 if(temp != diff){
                    art = 0;
                }
        
             }
        }

        if(art){
            printf("arithmetic\n");
        }else{
                k=1;
                j=0;
                for(j;j<n-1;j++){
                    k=j+1;
                    for(k;k<n;k++){
                        if(tab[k] < tab[j]){
                            temp = tab[j];
                            tab[j] = tab[k];
                            tab[k]  = temp;
                        }
                    }
                }
                j=0;
             diff= tab[0]-tab[1];
             part =1;
             for(j;j<n-1;j++){
                 temp = tab[j]- tab[j+1];
                 if(temp != diff){
                    part = 0;
                }
        
             }
            if(part){
                printf("permuted arithmetic\n");
            }else{
                printf("non-arithmetic\n");
            }
        }
        
    }
    return 0;
}
