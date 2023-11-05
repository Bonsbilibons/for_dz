#include <iostream>
#include <ctime>
using namespace std;

void SetSize(unsigned int size, int x, int y) {
    if (size > y || size < x) {
        cout << "wrong argument";
    };
}

void AllocateMemory(int** array, int size) {
    *array = new int[size];
}

void FillArray(int* array, int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i <= size - 1; i++) {
        array[i] = min + (rand() % (max - min));
    }
}

void ShowArray(int* array, int size) {
    for (int i = 0; i <= size - 1; i++) {
        cout << array[i] << " ";
    }
}

void FreeMemory(int* array) {
    delete[] array;
}

int main()
{
    srand(time(NULL));
    /*int x = 10;
    double y = 20.3;

    cout << x << "\n";
    cout << (&x) << "\n";
    cout << (long long int)(&x) << "\n";
    cout << (long long int)(&y) << "\n";
    cout << (long long int)(&main) << "\n";
    cout << (long long int)(&cout) << "\n";
    cout << (long long int)(&cin) << "\n";
    cout << (long long int)(&rand) << "\n";*/

    /*unsigned int size;

    cout << "enter size \n";
    cin >> size;*/

    //delete ;
    //delete[] array;

    /*int* array = new int[size];

    for (int i = 0; i <= size -1; i++) {
        array[i] = rand() % size;
        cout << array[i] << " ";
    }
    cout << "\n";

    int* temp = new int[size + 1];
    for (int i = 0; i <= size - 1; i++) {
        temp[i] = array[i];
    }
    delete[] array;
    
    array = temp;
    int value= 404;
    array[size] = value;
    for (int i = 0; i <= size; i++) {
        cout << array[i] << " ";
    }*/


    /*for (int x = size; x >= 0; x--) {
        for (int i = size - 1; i >= 0; i--) {
            array[i] = rand() % size;
            cout << array[i] << " ";
        }
        cout << "\n";
    }*/
    //delete[] array;


    unsigned int size;
    cout << "enter size \n";
    cin >> size; 

    SetSize(size, 10, 100000);

    int* array;
    AllocateMemory(&array, size);

    FillArray(array, size, 10, 100);
    ShowArray(array, size);
    FreeMemory(array);
}
