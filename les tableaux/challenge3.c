#include<stdio.h>

int main(){
    
    int n , i ,s = 0 ;
    printf("entrer votre nomberes : ");
    scanf("%d" , &n);
    int T[n] ; 
   printf("entrer les elementes :\n ");
    for ( i = 0; i < n; i++){

        scanf("%d",&T[i]) ;
        s = s + T[i] ;
    }
   
  printf("la somme est :%d " , s);
    return 0;
}