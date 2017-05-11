#include<stdio.h>
void main(){
    int cases,L;
    int p,r,g;
    int cycle,distance=0,temps=0,tempo,i=0;
    scanf("%d",&cases);
    scanf("%d",&L);
    for(i;i<cases;i++){
        scanf("%d",&p);
        scanf("%d",&r);
        scanf("%d",&g);
        cycle = r+g;
        temps +=(p-distance);
        distance +=(p-distance);
        tempo = temps % cycle;
        if(tempo < r){
            temps += r - tempo;
        }
    }
    if(distance < L){
        temps += (L-distance); 
    }
    //temps = temps+L-p;
    printf("%d\n",temps);
    
}
