#include<stdio.h>
#include<math.h>
int main(){
    int i=2;
    double temp,tp=0.0,nbr;
    int res;
    scanf("%lf",&nbr);
    while(getchar()!=EOF){
        i=2;
        tp=0.0;
        for(i;i<=nbr;i++){
            temp = (double) i;
            tp += log10(temp);
        }
        if(nbr<2){
            printf("1\n");
        }else{
            res = ceil(tp);
            printf("%d\n",res);
        }
        scanf("%lf",&nbr);
    }
    return 0;
}
