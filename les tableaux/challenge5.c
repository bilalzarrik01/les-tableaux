#include<stdio.h>
int main(){
int n ,i , min ;

    printf(" veuillez entrer le nombre :\n ");
    scanf("%d" , &n);
   int T[n];
   for ( i = 0; i <n; i++)
   {
    printf("veuillez entrer les element : \n" );
    scanf("%d" , &T[i]);
    min = T[0] ;
    if(min < T[i]);
    min = T[i] ;
   printf("le plus grand est : %d\n", min) ;
   }
   








}