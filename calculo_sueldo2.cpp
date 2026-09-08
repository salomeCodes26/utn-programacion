#include <iostream>
using namespace std;

int main(){

    float sueldoNeto;
    float bonoCategoria;
    float salarioFamiliar;
    float porcentajeAntiguedad;
    float sueldoFinal;

    int categoria;
    int hijos;
    int antiguedad;

    cout << "Ingrese el sueldo neto: ";
    cin >> sueldoNeto;

    cout << "Ingrese la categoria (1-cadete, 2-administrativo, 3-supervisor, 4-gerente): ";
    cin >> categoria;

    cout << "Ingrese la cantidad de hijos: ";
    cin >> hijos;

    cout << "Ingrese los anios de antiguedad: ";
    cin >> antiguedad;

    // Bono por Categoria
    if(categoria == 1)
    {
        bonoCategoria = 0;
    }
    else if(categoria == 2)
    {
       bonoCategoria = 3000;
    }
    else if(categoria == 3)
    {
        bonoCategoria = 6000;
    }
    else 
    { 
        categoria = 10000;
    }
      // Salario Familiar 
      salarioFamiliar = hijos * 350;
      
     // Porcentaje por antiguedad
     if(antiguedad <= 2)
     {
        porcentajeAntiguedad = 0;
     }
      else if(antiguedad <= 5)
      {
        porcentajeAntiguedad = 0.25;
      }
      else if(antiguedad <= 10)
    {
        porcentajeAntiguedad = 0.60;
    }
    else 
    {
        porcentajeAntiguedad = 1.00;
    }

    sueldoFinal = (sueldoNeto + bonoCategoria + salarioFamiliar)*(1 + porcentajeAntiguedad);
 
    cout << "El sueldo final es: $" << sueldoFinal << endl;

    return 0;
}