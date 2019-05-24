#include<conio.h>
#include<stdio.h> 
#include<iostream>
using namespace std; 
int a[5]={9,5,8,2,4}; 	
int n=5; 
int main() 
{ 

int inter=(n/2),i=0,j=0,k=0,aux; 
 
   /*for (i=0; i<5; i++) 
   { 
    cout<<"agrega el valor para la posicion "<< i<<"\n"; 
    cin>>a[i]; 
   } 
*/
cout<<"lista desordenada"<<endl;
   for(i=0;i<n;i++){

    cout<<a[i]<<",";
   }
cout<<endl;

   while(inter>0){ 
    for(i=inter;i<n;i++) 
    { 
     j=i-inter; 
     while(j>=0) { 
      k=j+inter; 
      if(a[j]<=a[k]){ 
      j--; 
      } 
      else{ 
       aux=a[j]; 
       a[j]=a[k]; 
       a[k]=aux; 
       j=j-inter; 
      } 
     } 
    } 
inter=inter/2; 
} 
cout<<"lista ordenada"<<endl;
   for(i=0;i<5;i++) 
   { 
    cout<<a[i]<<","; 
    getch(); 
   } 
return 0;
}  
