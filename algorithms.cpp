//algorithms.cpp
#include <iostream>
#include <cmath>
#include "algorithms.h"
#include "utils.h"

using namespace std;

void A1(double resA1[], int count, double Mx, double q) {
    for (int i = 0; i < count; i++) {
        double a1 = gen();
        double a2 = gen();
        double phi = 2 * M_PI * a2;
        double R = sqrt(-2 * log(a1));
        resA1[i] = Mx + q * R * sin(phi);
    }
    printResults("A1", resA1, count, Mx, q);
}

void A2(double resA2[], int count, double Mx, double q) {
    for (int i = 0; i < count; i++) {
        double a1 = gen();
        double a2 = gen();
        double phi = 2 * M_PI * a2;
        double R = sqrt(-2 * log(a1));
        resA2[i] = Mx + q * R * cos(phi);
    }
    printResults("A2", resA2, count, Mx, q);
}

void A3(double resA3[], int count, double Mx, double q) {
    for (int i = 0; i < count; i++) {
        double V1, V2, S;
        do {
            V1 = 2 * gen() - 1;
            V2 = 2 * gen() - 1;
            S = V1 * V1 + V2 * V2;
        } while (S >= 1);
        double R = sqrt((-2 * log(S)) / S);
        resA3[i] = Mx + q * V1 * R;
    }
    printResults("A3", resA3, count, Mx, q);
}