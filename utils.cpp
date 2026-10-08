//utils.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include "utils.h"
//#include <windows.h>

using namespace std;

/*void language() {
  // SetConsoleCP(1251);
  // SetConsoleOutputCP(1251);
}*/


void welcome() {
    cout << "\033[1;35m";
    cout << "Лабораторна робота 4. Дослідження процесу створення функцій користувача\n";
    cout << "\033[1;36m";
    cout << "Завдання 3. Виконання завдань 2-3 лабораторної роботи 1\n";
    cout << "\033[1;35m";
    cout << "Алєксєєва Аліна. КБ-21. Варіант 1 \n";
    cout << "\033[0m\n";
}

double gen() {
    return (double)rand() / RAND_MAX;
}

double calcMx(double res[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += res[i];
    }
    return sum / count;
}

double calcq(double res[], int count, double Mx) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += pow(res[i] - Mx, 2);
    }
    return sqrt(sum / count);
}

void printResults(const char* algoName, double res[], int count, double Mx, double q) {
    sort(res, res + count);
    cout << "\nРезультати алгоритму " << algoName << ":\n" << "\033[1;35m";
    cout << fixed << setprecision(6);
    for (int i = 0; i < count; i++) {
        cout << setw(10) << res[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << "\033[0m" << endl;

    double Mx1 = calcMx(res, count);
    double q1 = calcq(res, count, Mx1);
    cout << "Обчислене математичне сподівання: " << "\033[1;35m" << Mx1 << "\033[0m" << endl;
    cout << "Обчислене стандартне відхилення: " << "\033[1;35m" << q1 << "\033[0m" << endl;
    cout << "Відхилення від введеного Mx: " << "\033[1;35m" << abs(Mx1 - Mx) << "\033[0m" << endl;
    cout << "Відхилення від введеного q: " << "\033[1;35m" << abs(q1 - q) << "\033[0m" << endl;
}