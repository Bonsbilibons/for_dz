#include <iostream>
using namespace std;

int main()
{
    ////char name[6] = { 'S', 'a', 's', 'h', 'a' , '\0' };
    ////char name[6] = { 83, 97, 115, 104, 97 , '\0' };
    //char name[6] = "Sasha";
    //cout << "Hello world!";
    //cout << name;

    //int length;
    //length = 50;
    //char* name = new char[length] {};

    //cout << "Please enter your name:\n";
    ////cin >> name;

    //gets_s(name, length);
    ////strcpy_s(name, length, "BlackFatCat");

    ////cout << name;io

    //for (int i = 0; i < strlen(name); i++) 
    //{
    //    cout << name[i];
    //}


    //delete[] name;



    /*int length;
    length = 50;
    char* word = new char[length] {};

    cout << "Please enter your name:\n";
    gets_s(word, length);

    char symbol;
    cout << "Please enter symbol:\n";
    cin >> symbol;


    int counter = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == symbol)
        {
            counter++;
        }
    }

    cout << "Here have been found:" << counter << " symbol " << symbol;

    delete[] word;*/


    int length;
    length = 50;
    char* stroka = new char[length] {};

    cout << "Please enter string:\n";
    gets_s(stroka, length);

    int key_space = 0;
    for (int i = 0; i < strlen(stroka); i++)
    {
        if (stroka[i] == ' ') 
        {
            key_space++;
        }
    }
    int count_words = key_space + 1;
    int count_symbols = strlen(stroka) - key_space;
    
    int avarage_length_of_word = count_symbols / count_words;

    cout << "Avarage length of word: " << avarage_length_of_word;
}