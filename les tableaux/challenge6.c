#include<stdio.h>
int i ,n , f , r ;
int main(){
printf("essiez entrer la taille :\n");
scanf("%d" , &n);
int T[n];
 for ( i = 0; i < n ; i++ )
{
    scanf("%d" , &T[i]);

}
printf("veuillez entrer le facteur : \n");
scanf("%d" , &f);
for ( i = 0; i <n ; i++)
{
    r = f * T[i] ;
    printf("%d * %d :  %d\n " ,f  , T[i],r);
}
}

