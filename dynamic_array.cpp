#include <iostream>
#include <ctime>
#include <windows.h>   
using namespace std;

enum Colors { RED = 12, YELLOW = 14, BLUE = 3, PINK = 13, GREEN = 2, WHITE = 2 | 3 | 4 };
enum Characters { SPACE = 0, WALL = 1, ENEMY = 2, FIRSTAIDKIT = 3, STAR = 4 };

void SetCursor(int x, int y, Colors color, string text)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, color);
    cout << text;
}

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

void PutSymbolOnY(int**& array, int height, int width, int symbol, int position) {
    int** temp = new int* [height];
    for (int y = 0; y < height; y++) 
    {
        temp[y] = new int[width + 1];
        for (int x = 0; x < width + 1; x++) 
        {
            if (x == position)
            {
                temp[y][x] = symbol;
            }
            else if (x > position) {
                temp[y][x] = array[y][x - 1];
            }
            else {
                temp[y][x] = array[y][x];
            }
        }
    }
    for (int y = 0; y < height; y++) {
        delete[] array[y];
    }
    delete[] array;

    array = temp;
}

void PutSymbolOnX(int**& array, int height, int width, int symbol, int position) {
    int** temp = new int* [height + 1];
    for (int y = 0; y < height + 1; y++)
    {
        temp[y] = new int[width];
        if (y < position) {
            for (int x = 0; x < width; x++)
            {
                temp[y][x] = array[y][x];
            }
        }
        else if (y == position) {
            for (int x = 0; x < width; x++)
            {
                temp[y][x] = symbol;
            }
        }
        else {
            for (int x = 0; x < width; x++)
            {
                temp[y][x] = array[y - 1][x];
            }
        }
    }

    for (int y = 0; y < height; y++) {
        delete[] array[y];
    }
    delete[] array;

    array = temp;
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


   /* unsigned int size;
    cout << "enter size \n";
    cin >> size; 

    SetSize(size, 10, 100000);

    int* array;
    AllocateMemory(&array, size);

    FillArray(array, size, 10, 100);
    ShowArray(array, size);
    FreeMemory(array);*/



    /*unsigned int width;
    unsigned int height;
    cout << "Enter rows and columns";
    cin >> width;
    cin >> height;
    
    int** array = new int* [height];

    for (int y = 0; y < height; y++) {
        array[y] = new int[width];
        for (int x = 0; x < width; x++) {
            array[y][x] = rand() % 100;
            cout << array[y][x] << " ";
            Sleep(rand() % 1000);
        }
        Sleep(100);
        cout << "\n";
    }

    for (int y = 0; y < height; y++) {
        delete[] array[y];
    }
    delete[] array;*/



    /*unsigned int width;
    unsigned int height;
    cout << "Enter rows and columns";
    cin >> width;
    cin >> height;

    int** maze = new int* [height];

    for(int y = 0; y < height; y++) {
        maze[y] = new int[width];
        for (int x = 0; x < width; x++) {
            if (x == 0 or y == 0 or y == height - 1 or x == width - 1) {
                maze[y][x] = WALL;
                SetCursor(x, y, BLUE, "#");
            }
        }
    }

    for (int y = 1; y < height - 1; y++) {
        for (int x = 1; x < width - 1; x++) {
            SetCursor(x, y, WHITE, " ");
            int star = rand() % 5;
            if (star == STAR) {
                maze[y][x] = STAR;
                SetCursor(x, y, WHITE, ".");
                Sleep(1);
            }
        }
    }

    for (int y = 0; y < height; y++) {
        delete[] maze[y];
    }
    delete[] maze; 


    Sleep(INFINITE);*/



    //unsigned int height;
    //cout << "Enter columns";
    //cin >> height;

    //int** array = new int* [height];

    //for (int y = 0; y < height; y++) {
    //    int i = rand() % 10;
    //    array[y] = new int[i];
    //    for (int x = 0; x < i; x++) {
    //        array[y][x] = rand() % 100;
    //        cout << array[y][x] << " ";
    //        //Sleep(rand() % 1000);
    //    }
    //    Sleep(100);
    //    cout << "\n";
    //}

    //for (int y = 0; y < height; y++) {
    //    delete[] array[y];
    //}
    //delete[] array;



    unsigned int width;
    unsigned int height;
    cout << "Enter rows and columns";
    cin >> width;
    cin >> height;

    int** array = new int* [height];

    for (int y = 0; y < height; y++) {
        array[y] = new int[width];
        for (int x = 0; x < width; x++) {
            array[y][x] = rand() % 10;
            cout << array[y][x] << " ";
            //Sleep(rand() % 1000);
        }
        //Sleep(100);
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";

    PutSymbolOnY(array, height, width, 0, 2);
    PutSymbolOnX(array, height, width + 1, 0, 2);

    for (int y = 0; y < height + 1; y++) {
        for (int x = 0; x < width + 1; x++) {
            cout << array[y][x] << " ";
        }
        cout << "\n";
    }

    for (int y = 0; y < height + 1; y++) {
        delete[] array[y];
    }
    delete[] array;





}
