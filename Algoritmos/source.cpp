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
/**
 * @file source.cpp
 * 
 * @brief En este archivo se implementa las declaraciones de las funciones en el archivo headerSort.hpp.
*/
using namespace std;
void bubbleSort(int arr[], int n){
//implementacion de swap --> https://www.it.uc3m.es/pbasanta/asng/course_notes/ch05s07.html
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                //Se cambia de posicion
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selectionSort(int arr[], int n){
    //Se recorre la matriz
    for(int i = 0; i < n; i++){
        //valor en el arreglo
        int min_val = arr[i];
        //Por cuaal poscion del arreglo va:
        int min_idx = i;
        //Por rangos
        for(int j = i+1; j < n; j++){
            if (arr[j] < min_val){
                min_val = arr[j];
                min_idx = j;
            }
        }
        if(min_idx != i){
            arr[min_idx] = arr[i];
            arr[i] = min_val;
        }
    }
}
void insertionSort(int arr[], int n){
    //Se recorre la matriz
    for(int i = 0; i < n -1; i++ ){
       int j = i + 1;
        int temp = arr[j];
        //valores mayores moverlos hacia la derecha
        while(j > 0 && temp < arr[j - 1]){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    } 
}
void quickSort(int arr[], int low, int high){
   if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    } 
}