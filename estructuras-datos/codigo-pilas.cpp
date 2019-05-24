#include <iostream>

using namespace std;
int pila[10],tope=-1;

void pop(){
    if(tope!=-1){
        cout<<"Se ha eliminado el elemento de la pila "<<tope<<": "<<pila[tope];
        tope--;
    }else
        cout<<"La pila esta vacia. Error Underflow";
        
    return;
}

void push(){
    if (tope<10){
        tope++;
        cout<<"Introducce el elemento de la pila "<<tope<<": ";
        cin>>pila[tope];
    }
    else
        cout<<"Pila llena. Overflow";
    return;
}

void isEmpty(){
    if(tope==-1)
        cout<<"La pila esta vacia. IsEmpty";
    else
        cout<<"La pila no esta vacia.";
    return;
}

void mostrar(){
    if(tope==-1)
		cout<<"no hay datos en la pila";
	else
    {
		cout<<"los datos de la pila son:"<<endl;
    	for(int x=tope; x>=0;x--){
        	cout<<"["<<pila[x]<<"]"<<endl;
    	}
    }
    return;
}
 main(){
 int op;
 do{
    
    cout<<"\n\nPrograma 1 de Pilas.\n\nMenú\n\n\t1) Pop\n\t2) Push\n\t3) IsEmpty\n\t4) Mostrar \n\t5) Salir\n\nElige una opción: ";
    cin>>op;
    switch(op){
        case 1: 
            pop();
            break;
        case 2: 
            push();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            mostrar();
            break;
        case 5:
            cout<<"Gracias por usar mi programa.\nHasta luego...";
            break;
        default:
            cout<<"Opción incorrecta";
    }

    }
    while(op!=5);
 return 0;
 }
