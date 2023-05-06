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
//Los includes de abajo no son necesarios.
//#include <vector>
//#include <algorithm>
//#include <stdexcept>
//#include <functional>

//Plantilla para una clase de tipo 'T' y ejecuta  LIFO
template<typename T>
class Stack {
private:
//vector de elementos de caracter privado.
  std::vector<T> data_;
//Funciones para el uso del LIFO
public:
  void push(T value) {
    data_.push_back(value);
  }

  T pop() {
    if (data_.empty()) {
      //Excepcion: si la pila esta vacia
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  void clear() {
    data_.clear();
  }

  bool empty() const {
    return data_.empty();
  }
  //numero dde elementos en la pila
  std::size_t size() const {
    return data_.size();
  }
  // Para objetos de tipo landa y standart 
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};
//Implementacion de la clase Stack en la funcion main()
int main() {
  //Stack de tipo entero
  Stack<int> s;
  //Le metemos 3 valores
  s.push(2021);
  s.push(2054);
  s.push(6524);
  //imprimimos esos valores
  std::cout << "Stack size: " << s.size() << std::endl;
  //Uso de la funcion lambda en la impresion de los elementos del stack que pasa como argumento
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  //bloque try-catch si la pila esta vacia --> "Stack is empty"
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  //Nueva instancia
  Stack<float> p;
  //Comentar para que la pila no tenga nada entre en la excepcion de arriba
  /*p.push(2021.17);
  p.push(2054.98);
  p.push(6524.54);
  std::cout << "Stack size: " << p.size() << std::endl;*/
  //Uso de la funcion lambda en la impresion de los elementos del stack que pasa como argumento
  p.foreach([](float& value) {
    std::cout << "Value: " << value << std::endl;
  });
    try {
    /*while (!p.empty()) {
      int value = p.pop();
      std::cout << "Popped value: " << value << std::endl;
      
    }
    std::cout << "Stack size: " << p.size() << std::endl;*/
    p.pop();
    p.pop();
    p.pop();
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  return 0;
}
