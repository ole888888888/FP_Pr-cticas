
#include <iostream>
using namespace std;

int main(){
   double recargo_km = 0.1;
   double trf_base = 150.0;
   double trf;
   double dist;

   cout << "Tarifa aérea.";
   cout << "\nIntroduzca la distancia del recorrido del viaje: ";
   cin >> dist;

   bool corto = dist <= 300.0;

   if(corto){
      trf = trf_base;
   }

   else{
    trf = trf_base + recargo_km * (dist-300); 
   }

   cout << "Tarifa final: ";
   cout << trf << endl;
}