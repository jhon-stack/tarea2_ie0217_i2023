/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <stdexcept>
#include "headerExceptions.hpp"


int main() {
  int a,b;//-->a -> dividendo, b -> divisor
  int c,d;//-->c -> dividendo, d -> divisor
  //Exception generada por el usuario (propia)
  //https://www.geeksforgeeks.org/handling-the-divide-by-zero-exception-in-c/
  //bloque try catch 
  try {
    throw MyException();
    //por referencia de std::excepcion
  } catch (std::exception& e) {
    //Se genera la excepcion mientras se llaman al metodo de la clase myException
    std::cout << "Error: " << e.what() << std::endl;
  }
  //excepciones de la bibioletca standart
  
  a = 100;
  b = 0;
  //bloque try-catch
  if (b == 0){
    throw std::invalid_argument("El divisor no puede ser 0");
  }
  try{
    int cociente = a/b;
    std::cout << "El resultado de la division es:" << cociente << std::endl;
  }
  catch(std::exception& e){
    std::cout << "Error: " << e.what() << std::endl;
  }
  //excepcion en tieempo de ejecucion
  //RuntimeExceptions are those exceptions which are checked at runtime.
  c = 100;
  d = 0;
  try
  {
    
    if (d == 0){
      throw std::runtime_error("El divisor no puede ser 0");
    }
    int cociente_1 = c/d;
    std::cout << "El resultado de la division es:" << cociente_1 << std::endl;
  }
  
  catch(const std::exception& e)
  {
    std::cout << "Error: " << e.what() << std::endl;
  }
  
  

  

  return 0; 
}
