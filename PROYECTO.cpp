#include <iostream>
#include <iomanip>
using namespace std;
const int longCad= 20;
typedef struct costoPorArticulo
{
  char  nombreArticulo[longCad + 1];
  int   cantidad;
  float precio;
  float costoPorArticulo;
} RegCPA;
//*****************************************************************************
void LeerNCP(RegCPA *arr, int i);
void LeerCosto(RegCPA *arr, int i);
void VerArr(RegCPA *arr, int nart);
void VerCostTotalCompra(RegCPA *arr, int nart);
int main()
{
  cout << "\n\n\n\nProductos Comprados por un Cliente\n";

  int nart;
  cout << "\nCantidad de Articulos: ";
  cin >> nart;
  // crear el arreglo
  RegCPA arr[nart];
  for(int i= 0; i < nart; i++)
  {
    LeerNCP(arr, i);
    LeerCosto(arr, i);
  }
  VerArr(arr, nart);
  VerCostTotalCompra(arr, nart);
  return 0;
}
void LeerNCP(RegCPA *arr, int i) {
    cout << "\n\nNombre Articulo: ";
    cin >> arr[i].nombreArticulo;
    cout << "\nCantidad: ";
    cin >> arr[i].cantidad;
    cout << "\nPrecio Unitario: ";
    cin >> arr[i].precio;
    arr[i].costoPorArticulo= 0;
}
void LeerCosto(RegCPA *arr, int i) {
    cout << "\nCosto Articulo: ";
    cin >> arr[i].costoPorArticulo;
}
void VerArr(RegCPA *arr, int nart) {
  cout << "\n\nTOTAL";
  for(int i= 0; i < nart; i++)
  {
    cout << "\n\nNombre Articulo= " << arr[i].nombreArticulo;
    cout << "\n         Cantidad= " << arr[i].cantidad;
    cout << "\n  Precio Unitario= " << arr[i].precio;
    cout << "\n   Costo Articulo= " << arr[i].costoPorArticulo;
  }
}
void VerCostTotalCompra(RegCPA *arr, int nart) {
  float suma= 0;
  for(int i= 0; i < nart; i++)
  {
    suma+= arr[i].costoPorArticulo;
  }
  cout << "\n\nMonto Total Compra=$ ";
  cout << std::fixed << std::setw(10) << std::setprecision( 2 ) << suma;
  cout << "\n\n";
}
