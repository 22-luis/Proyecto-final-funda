#include "iostream"
#include "cstring"

using namespace std;

const int longCad = 20; 
 
struct costoPorArticulo
{ char nombreArticul[longCad + 1];
 int cantidad; 
float precio; 
float costoPorArticulo; 
}; 
int n;
string cad;

int leerdatos()
{
  costoPorArticulo datos[100];
  for(int i=0;i<n;i++)
  {
     cout << "Nombre de articulo :";  //lee y ingresa los datos al arreglo las veces que el usuario a solicitado
     getline(cin, cad, '\n');
     strncpy(datos[i].nombreArticul, cad.c_str(), longCad);
     datos[i].nombreArticul[longCad]='\0';
     cout << "cantidad :";
     cin >> datos[i].cantidad;
     cout << "Precio de articulo :";
     cin >> datos[i].precio;
     cin.ignore(100,'\n');   //es utilizada para que no se use el mismo nombre al llenar varios datos
  }
  return 0;
}

int costoarticulo()
{
  costoPorArticulo datos[100];   // calcula el precio total de cada articulo multiplicando su precio por la cantidad 
  cout << endl;
  for(int i=0;i<n;i++)
  {
   datos[i].costoPorArticulo = datos[i].cantidad * datos[i].precio;
  }
  return 0;
}

int mostrardatos()
{
  costoPorArticulo datos[100];  //muestra todos los datos ingresados 
  
   cout << "Articulo   "<<"  Cantidad   "<<"  Precio   "<<"  Costo total"<<endl;
   
   for(int i=0;i<n;i++)
  {
   cout << datos[i].nombreArticul<<"           "<<datos[i].cantidad<<"           "<<datos[i].precio<<"           "<<datos[i].costoPorArticulo<<endl;
  }
return 0;
}

int costototal()
{
 costoPorArticulo datos[100];  // realiza la suma del costo total de los articulos ingresados
  float suma = 0;

   for(int i=0;i<n;i++)
  {
    suma = suma + datos[i].costoPorArticulo;
  }  

  cout << "La suma total es :"<< suma;
  return 0;
}

int main()
{

  int cantproductos;   // se solicita la cantidad de articulos a ingresar y llama las funciones

  cout << "Cuantos articulos incluira :";
  cin >> cantproductos;

cin.ignore(100,'\n');

  n = cantproductos;

costoPorArticulo datos[100];
 
  leerdatos();

  costoarticulo();

  mostrardatos();

  costototal();

  return 0;
}
