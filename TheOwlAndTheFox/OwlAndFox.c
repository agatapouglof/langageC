#include<stdio.h>
int main(){
    int cases,val,temp,test,i=0;
    scanf("%d",&cases);
    for(i;i<cases;i++){
        scanf("%d",&val);
        temp =10;
        test =0;
        while((val % 10) == 0){
            val /=  10;
            temp*= 10;
            test = 1;
        }
        val--;
        if(test) val *= (temp/10);
        printf("%d\n",val);
    }
    return 0;
}
