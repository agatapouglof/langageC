#include<stdio.h>
/*set all the number <= N in tab
 * start suppress all multiple and count each suppression
 * stop when count of multiple suppressed is Kth
 *
 * */
int main(){
    int N,Kth,val=2,mult=2,i=0,count=1,res=2;
    scanf("%d",&N);
    scanf("%d",&Kth);
    int tab[N];
    for(i;i<N-1;i++){
        tab[i] = i+2;
    }
    while(count <= Kth){
        if(mult<=N){
            if(tab[mult-2] != -1){
                tab[mult-2] = -1;
                count++;
                res = mult;
            }
             
             mult+=val;
        }else{// if mult >N
            val++;
            mult = val;
        }
    }
    printf("%d",res);
    return 0;
}
