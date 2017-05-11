#include<stdio.h>
#include<stdlib.h>
/**
 * author : Agatapouglof  09/05/2017
 *find points not in  triangle in a graph
 * for each line of the graph check if we can get at least on triangle from points in relation with the line point
 * i j k is a triangle if all points are in relation iRj iRk and jRk ; where R is a symetric relation of been jointed
 * say vertex i is part of a triangle if i has two different neighbors j and k such that j and k are neighbors of each other
 * in
 * 0 1 1 1 0 0 0 0 0
 * 1 0 0 0 0 0 1 0 0
 * 1 0 0 1 0 1 0 0 0
 * 1 0 1 0 0 1 1 0 0
 * 0 0 0 0 0 0 1 1 0
 * 0 0 1 1 0 0 0 0 0
 * 0 1 0 1 1 0 0 1 0
 * 0 0 0 0 1 0 1 0 1
 * 0 0 0 0 0 0 0 1 0
 * out 
 * 1 8
 */ 
int main(){
    int taille,i=0,j=0,count,test,k;
    scanf("%d",&taille);
    while(taille != -1){
        i=0;j=0;
        int tab[taille][taille],res[taille];
        for(i;i<taille;i++){
            j=0;
            for(j;j<taille;j++){
                scanf("%d",&tab[i][j]);
            }

        }
        //printf("lol\n");
        count = 0;
        i=0;j=0;
        for(i;i<taille;i++){ // iterate other all line
            test = 0;
            j=0;
            k=1;
            while(j<taille-1){
                //k=j+1;
                // printf("one\n");
                if(j==i || tab[i][j]==0){// not verifiy triangle for the point where were are
                    j++;
                    k=j+1;
                }else{
                    if(k==i || tab[i][k]==0){//not verify triangle for the point  where we are
                        k++;
                        if(k>=taille){// to not exeed table  
                            j++;
                            k=j+1;
                        }
                    }else{
                        if(tab[j][k] == 1){// point in i j and k are on a tringle
                            test = 1;
                        }
                        k++;
                        if(k>=taille){// iterate to verify next possible triangle
                            j++;
                            k=j+1;
                        }
                    
                    }

                }
                //j++;
            }
            if(test == 0){// if after all test the point on line i  is not in a triangle at all
                res[count] = i;
                count++;
            }
        }
         if(count >0){
            i=1;
            printf("%d",res[0]);
            for(i;i<count;i++){
                printf(" %d",res[i]);
            }
            printf("\n");
         }//else{printf("0\n");}// if no single point no print
        scanf("%d",&taille);
    }
    return 0 ;
}
