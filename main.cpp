//main.cpp
#include <iostream>
#include <ctime>
#include "algorithms.h"
#include "utils.h"
//#include <windows.h>

using namespace std;

int main() {
    srand(time(0));  // Ініціалізуємо генератор випадкових чисел
    //language();
    welcome();

    int count;
    cout << "Введіть кількість значень для генерації: ";
    cin >> count;

    double Mx, q;
    cout << "Введіть математичне сподівання (Mx): ";
    cin >> Mx;
    cout << "Введіть стандартне відхилення (q): ";
    cin >> q;

    double resA1[count], resA2[count], resA3[count];

    A1(resA1, count, Mx, q);
    A2(resA2, count, Mx, q);
    A3(resA3, count, Mx, q);


    cout << "\033[1;35m" << "\nДякую за використання програми!\n\tАлєксєєва Аліна КБ-21" << "\033[0m" << endl;
    return 0;
}