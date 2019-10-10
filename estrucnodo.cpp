#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int entero;
    nodo *nodo2;
    nodo(int newvalor){
    	entero=newvalor;
    	nodo2=NULL;
	}
	void ingresar(int newvalor){
    nodo *po=nodo2;
    nodo *newnodo=new nodo(newvalor);
    if(po!=NULL) while(po->nodo2!=NULL) po=po->nodo2;
    if(po==NULL) nodo2=newnodo;
    else po->nodo2=newnodo;
    }
    void ordenar(int newvalor){
	nodo *po=nodo2;
    nodo *newnodo=new nodo(newvalor);
    nodo *before=this;
	if(po==NULL){
	before->nodo2=newnodo;
    return;
    }else while(po!=NULL && newvalor>po->entero){
        before=po;
        po=po->nodo2;
    }
    newnodo->nodo2=before->nodo2;
	before->nodo2=newnodo;
    }
    void mostrar(){
    nodo *po=nodo2;
    while(po!=NULL){
    cout<<po->entero<<endl;
    po=po->nodo2;
        }
    }
};
nodo l1(3);

int main()
{
	int opcion;
	do{
		system("cls");
		cout<<".::Elija una opcion::."<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Mostrar datos ordenados"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		switch(opcion){

		case 1:	
		int newvalor;
		cout<<"Ingresar datos\n";
		cin>>newvalor;
		l1.ordenar(newvalor);
		break;
		case 2:
		cout<<"Los valores son: "<<endl;
		l1.mostrar();
		system("pause");	
		break;
		case 3:
		cout<<"Vuelva pronto"<<endl;
		break;	
		default:
		cout<<"Ingrese una opcion valida "<<endl;
		system("pause");
		break;
	    }
	}while(opcion!=3);

	 return 0;
}
