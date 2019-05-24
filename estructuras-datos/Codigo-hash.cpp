#include <iostream>



using namespace std;



int a[10]={0,0,0,0,0,0,0,0,0,0};



void hashing(int data){

  int pos=data%10;

 if(a[pos]==0)

  a[pos]=data;

 else{

  for(int i=(pos+1)%10; i!=pos; i=(i+1)%10){

   if(a[i]==0){

    a[i]=data;

    break;

   }

   if(i==pos){

    cout<<"Sin espacio";

    break;

   }

  }

  

 }

}



void display(){

 for(int i=0; i<10; i++){

  cout<<a[i]<<"  ";

 }

}



void buscar(int data){

 int pos=data%10;

 int index;

 if(a[pos]==0)

  cout<<"El elemento ha sido borrado";

 else if(a[pos]==data)

  cout<<"El elemento se encuentra en la posicion index: "<<pos+1<<endl;

 else

  for(int i=(pos+1)%10; i!=pos; i=(i+1)%10){

   if(a[i]==data){

    cout<<"El elemnto se encuentra en la posicion index: "<<i+1<<endl;

   }

   if(i==pos)

    cout<<"Elemento no encontrado";

    break;

  }

 

}



main(){

 int x,z;

 cout<<"Introduzca el arreglo"<<endl;

  for(int i=0; i<10; i++){

   cout<<"Valor: ";

   cin>>x;

   hashing(x);

  }

 display();

 int f=0;

 do{ 

 cout<<"\nIntroduzca el numero a buscar: "<<endl;

 cin>>z;

 buscar(z);

 f++;

}while(f<10);



 

system("PAUSE");

return 0;

}
