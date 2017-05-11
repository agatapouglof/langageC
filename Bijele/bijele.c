#include<stdio.h>
#include<stdlib.h>
int AddOrRemove(int max,int val){
    return  max-val;
}
int main(){
    int val,i=0;
    for(i;i<6;i++){
        scanf("%d",&val);

            if (i<2) { val = AddOrRemove(1,val);}
            else{
            if (i<5)  val = AddOrRemove(2,val);
            
            else{ val = AddOrRemove(8,val);}
            }      
        
        if(i==0){
            printf("%d",val);
        }else{
            printf(" %d",val);
        }
    }
    return 0;
}
