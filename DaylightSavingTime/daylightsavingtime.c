#include<stdio.h>
void forward(int val){
    //val **** la valeur total convertie en minutes
    int h ;
    if(val<0){
        val = 1440 + val; 
    }
        
    h = (val/ 60) % 24;
    val = val % 60;
    printf("%d %d\n",h,val);

}
    

int main(){
    int cases,h,m,i=0,d;
    char change[2];
    scanf("%d",&cases);
    for(i;i<cases;i++){
        getchar();
        scanf("%s",change);
        scanf("%d",&d);
        if(change[0] == 'B'){
          d= -d;
        }
        scanf("%d",&h);
        d+= (h*60);
        scanf("%d",&m);
        d+=m;
        forward(d);
    }

    return  0;
}
