#include <iostream>
#include "source.cpp"
#include "headerSort.hpp"

using namespace std;

int main(){
    //Declaracion de array
    int arr[] = {7,5,3,1,9,2,6,4,8};
    //Declaracion de n
    int N = 9;
    //Se llaman a las funciones y se imprime
    bubbleSort(arr, N);
    cout << "El arreglo usando el algoritmo bubbleSort queda de la siguiente manera;" << endl;
    cout << "{";
    for(int i = 0; i < N; i++) {
        cout <<   arr[i] << "\t";
    }
    cout << "}";
    cout << endl;
    selectionSort(arr,N);
    cout << "El arreglo usando el algoritmo selectionSort queda de la siguiente manera;" << endl;
    cout << "{";
    for(int i = 0; i < N; i++) {
        cout <<   arr[i] << "\t";
    }
    cout << "}";
    cout << endl;

    insertionSort(arr,N);
    cout << "El arreglo usando el algoritmo insertionSort queda de la siguiente manera;" << endl;
    cout << "{";
    for(int i = 0; i < N; i++) {
        cout <<   arr[i] << "\t";
    }
    cout << "}";
    cout << endl;

    quickSort(arr,0,N-1);
    cout << "El arreglo usando el algoritmo quickSort queda de la siguiente manera;" << endl;
    cout << "{";
    for(int i = 0; i < N; i++) {
        cout <<   arr[i] << "\t";
    }
    cout << "}";
    cout << endl;
    return 0;
}