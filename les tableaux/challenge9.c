#include<stdio.h>

int main() {
int n , i ;
printf("veuillez entrer la taille de tableau :");
scanf("%d" , &n);
int Ta[n];
int Tb[n];
int j =0 ;
for ( i = 0; i < n ; i++)
{
    printf("entrer les element : ");
    scanf("%d" ,&Tb[n]);
}
for ( i < n; i = 0; i--)
{
   for (j = 0; i < n; j++)
   {
     Ta[j] = Tb[i];
   }
    
}
for ( i = 0; i <n; i++)
{
  printf("%d" , Ta[i]);
}




}