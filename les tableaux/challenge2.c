#include<stdio.h>


int main (){
    int n , i  ;
  
printf("donner la du tableau :");

       scanf("%d" , &n);
         int T[n];
    for ( i = 0; i < n; i++)
    {
      
printf("donner la du tableau :");

       scanf("%d" , &T[i]);
    }
    
    for ( i = 0; i  <n; i++)
    {
        printf("%d\n" , T[i]);
    }
    return 0;
}