#include <stdio.h>
#include <conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 20
int cola[MAX],idxc=0;

int borrar_cola()
{   int m,n;
    if (idxc==0) printf("Error Cola esta vacia");
    else {
           m = cola[0]; //  elemento que sale
           for (n=0;n<idxc-1;n++) 
           cola[n]=cola[n+1];
           idxc--;
           return m;
           }
}

void insertar_c(int d)
{
     if (idxc==MAX) printf("Error Cola llena ");
     else {
       cola[idxc]=d;
       idxc++;
       }
 }
 
 int main()
 {
     int x=1,y,z,j;
     while (x!=0) {
           system("cls"); 
          
           printf("1. insertar en cola \n");
           printf("2. borrar en cola \n");
           printf("3. listar cola \n");
           printf("0. Salir \n");
           scanf("%d",&x);
           switch(x)
           {
            
             case 1: printf("digite su dato: ");
                     scanf("%d",&z);
                     insertar_c(z);
                     break;
             case 2: printf("dato borrado: %d",borrar_cola());
                     getch();
                     break;         
             case 3: for (j=0;j<=idxc -1; j++) printf("%d - ",cola[j]);
                     if (idxc==0) printf("Error Cola esta vacia");
                     getch();
                     break;
        

           }        
     }
     
}

