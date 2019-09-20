#include <iostream>
#include<conio.h>
using namespace std; 

struct nodo{
	int valor;
	struct nodo *Ptr;
	
}; 


void agregar (int, nodo *&);
void mostrarDatos(nodo *&);

int main(int argc, char** argv){
	int valor;
	struct  nodo *inicio;
	struct  nodo *aux;
	int n;
	inicio=NULL;
	
	do{
	
	
	cout<<"\n Ingresa una opcion sobre los datros: \n";
	cout<<"1: Leer datos : \n";
	cout<<"2: Mostrar datos : \n";
	
	cin >> n;
        switch(n)
        {
            case 1:
            	int val;
            	while(val!=NULL){
            	cout<<"Ingresa un valor: ";
            	cin>>val;
				agregar(val, inicio);
			}
            break;
            case 2: 
			mostrarDatos(inicio);
            break;
            default: 
            cout << "Opcion desconocida!" << endl;
            break;
		}    
    } while (n != 3); 
	getch();
	return 0;
}

void agregar (int valor, nodo *&Ptr){	
	struct  nodo *inicio2;
	struct  nodo *aux2;
	
		inicio2=Ptr;
		aux2= new nodo();
		aux2->valor=valor;
		aux2->Ptr=NULL;
	if (inicio2==NULL){
		Ptr=aux2;
	}
}

void mostrarDatos(nodo *&Ptr){
	while(Ptr!=NULL){
		cout<<"El valor es: " <<Ptr->valor;
		Ptr=Ptr->Ptr;
		
	}
}
