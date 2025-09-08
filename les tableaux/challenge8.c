#include<stdio.h>
 int main(){
int n , i , choice ;

 printf("veuillez entrer la taille : ");
 scanf("%d" , &n);
 int Ta[n];
int Tb[n];
  printf("veuillez entrer les eslement : \n");
for ( i = 0; i < n; i++)
{
  scanf("%d" , &Ta[i]);
}
printf("pour copiee : 1 - oui / 0 - non : ");
scanf("%d" ,&choice);
 if (choice == 1)
 {
    printf("le tableau est copiee\n");
 }
 else if ( choice == 0)
 {
   printf("le tableau non copiee .");
 }
 else{
    printf("entrer 1 ou 0 ");
    
 }
 for ( i = 0; i < n; i++)
 {
    Tb[i] = Ta[i];
 }
 for ( i = 0; i < n; i++)
 {
    printf("%d\n" , Tb[i]);
 }
 
 







  return 0;
 }