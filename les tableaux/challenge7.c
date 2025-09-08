#include<stdio.h>

int main(){

    int i , j , tmp , n;

    printf("veuillez entrer la taille de tableau : ");
    scanf("%d" , &n);
    int T[n] ;
    
    for ( i = 0; i < n; i++)
    {
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }
    for ( i = 0; i < n; i++)
    {
       for ( j = i+1; j < n ; j++)
       {
       if (T[i]>T[j])
       {
        tmp =T[i] ;
        T[i] = T[j] ;
        T[j] = tmp ;
       }
       
       }
       
    }
    
    printf("les elements du tableau par ordre croissant : \n");
    for ( i = 0; i < n; i++)
    {
      printf("%d\n" ,T[i] );
    }
    
    
    




}