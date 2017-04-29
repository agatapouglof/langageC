#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int i;
for(i=1;i<=c;i++){
    if((i%a)==0 && (i%b==0)){
        printf("FizzBuzz\n");
    }else{
        if((i%a)==0){
            printf("Fizz\n");
        }else{
            if((i%b)==0){
            printf("Buzz\n");
            }else{
                printf("%d\n",i);    
            }
        }
        
    }
}
return 0;
    }
