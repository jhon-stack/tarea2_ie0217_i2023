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
 * @file headerSort.hpp
 * 
 * @brief Este es un header de las definiciones de algunos algoritmos de ordenamiento.
*/
#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP
/**
 * @brief Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de posición si están en el orden equivocado.
 * 
 * @param arr Matriz dinamica y debe ser decalarado. Sin retorno.
 * @param n Tamanio de la matriz y debe ser decalarado
 */
void bubbleSort(int arr[], int n);
/**
 * @brief Es un algoritmo de ordenamiento que selecciona el elemento mas pequenio de una lista sin ordenar en cada iteracion pone ese elemento al inicio de la lista sin ordenar 
 * 
 * @param arr Matriz dinamica y debe ser decalarado. Sin retorno
 * @param n Tamanio de la matriz y debe ser decalarado
 */
void selectionSort(int arr[], int n);
/**
 * @brief Toma cada elemento de la matriz y lo inserta en su posición correcta en la parte ya ordenada de la matriz. Sin retorno.
 * 
 * @param arr Matriz dinamica y debe ser decalarado
 * @param n Tamanio de la matriz y debe ser decalarado
 */
void insertionSort(int arr[], int n);
/**
 * @brief  Elige un elemento pivote del arreglo y particionar el arreglo alrededor de ese elemento. Sin retorno.
 * 
 * @param arr Matriz dinamica y debe ser decalarado
 * @param low Indice del elemento mas bajo y debe ser decalarado
 * @param high Indice del elemento mas bajo y debe ser decalarado
 */
void quickSort(int arr[], int low, int high);

#endif /* HEADER_SORT_HPP */
