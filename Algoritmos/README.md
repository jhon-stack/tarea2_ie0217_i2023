# Descripción del programa

En este directorio se documentan las definicios de los algortimos de ordenamiento `bubbleSort`, `selectionSort`, `insertionSort`, y `quickSort` con la sintaxis de Doxygen. Ademas de esto se hace un analisis de complejidad de cada algoritmo.

## Requisitos previos

Lista de los requisitos previos necesarios para poder compilar y ejecutar el programa:

- Sistema operativo: Windows 10, Ubuntu 18.04, MacOS 13.3.1, etc.
- Lenguaje de programación: C++
- Versión del compilador: C++

## Pasos necesarios para compilar el programa

1. Descargar el código fuente de este repositorio en GitHub.
2. Abrir permisos de ejecución.
3. Ejecutar la línea: `make`

## Pasos necesarios para ejecutar el programa

1. Abrir una terminal en el directorio raíz del programa.
2. Ejecutar el comando `make run` para iniciar la aplicación.
3. Para limpiar el archivo binario ejecutar el comando `make clean `.

## Analisis de complejidad

### Bubblesort
Su complejidad es O(n^2) en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista.

### Selection Sort
Su complejidad es O(n^2) en el peor de los casos, ya que tiene que buscar el elemento mínimo en cada iteración y colocarlo en su posición correcta.

### Insertion Sort
Su complejidad es O(n^2) en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista y mover los elementos en su posición correcta.

### Quick Sort
Su complejidad es O(n log n) en el mejor de los casos y en promedio, pero puede degenerar a O(n^2) en el peor de los casos si se elige
un pivote malo.
