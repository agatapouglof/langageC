#include<stdio.h>
double moyenne(double a,double b){
        double moy = ((a+b)/2.0);
        return moy;
}
int main(){
   double  m1 = moyenne(4.0,1.0),temp;
   double vals [8];
   int i=0,m;
   double M1,M2;
   for(i;i<8;i++){
       scanf("%d",&m);
       temp = (double)m;
       vals[i] = temp;
   }
   M1 = moyenne(vals[0],vals[1]) +  moyenne(vals[2],vals[3]);
   M2 = moyenne(vals[4],vals[5]) +  moyenne(vals[6],vals[7]);
   if(M1 >M2){
    printf("Gunnar");
   }else if(M1 <M2){
    printf("Emma");
   }else{
    printf("Tie");     
   }

return 0;
}
