#include <iostream>
using namespace std;
int main () {
int orden;
int matriz[255][255];//aqui un NODO: nombre matriz y punteros (bidimensionales)
cout<<"\nPrograma que permite ingresar una matriz con limite dinamico y visualizarla";
cout<<"\nIngrese el orden de la matriz: ";
cin>>orden;
cout<<"\nIngrese elementos de la matriz"<<endl;

for(int i=0;i<orden;i++) { // Para llenarla
for(int j=0;j<orden;j++){
cin>>matriz[i][j]; }
}

for(int i=0;i<orden;i++) { // Para imprimirla
for(int j=0;j<orden;j++){
cout<<" "<<matriz[i][j];; }
cout<<"\n"; }
}
