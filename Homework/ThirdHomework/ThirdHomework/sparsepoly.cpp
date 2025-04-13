#include "sparsepoly.hpp"
#include <iostream>
using namespace std;


void SparsePoly::read() {
    printf("항의 개수를 입력하세요: ");
    scanf_s("%d", &numTerms);

    for (int i = 0; i < numTerms; i++) {
        int exp;
        float coeff;
        printf("%d번째 항의 계수와 차수를 입력하세요 (예:계수 차수): ", i + 1);
        scanf_s("%f %d", &coeff, &exp);
        if (coeff != 0) {
            coefficients.push_back(coeff);
            exponents.push_back(exp);
        }
    }
}


void SparsePoly::display(const char* str) {
    printf("%s", str);
    for (int i = 0; i < exponents.size(); i++) {
        printf("%.1fx^%d", coefficients[i], exponents[i]);
        if (i != exponents.size() - 1) printf(" + ");
    }
    printf("\n");
}


void SparsePoly::add(SparsePoly a, SparsePoly b) {
    int i = 0, j = 0;
    while (i < a.exponents.size() && j < b.exponents.size()) {
        if (a.exponents[i] > b.exponents[j]) {
            exponents.push_back(a.exponents[i]);
            coefficients.push_back(a.coefficients[i]);
            i++;
        }
        else if (a.exponents[i] < b.exponents[j]) {
            exponents.push_back(b.exponents[j]);
            coefficients.push_back(b.coefficients[j]);
            j++;
        }
        else {
            float sum = a.coefficients[i] + b.coefficients[j];
            if (sum != 0) {
                exponents.push_back(a.exponents[i]);
                coefficients.push_back(sum);
            }
            i++; j++;
        }
    }

    
    while (i < a.exponents.size()) {
        exponents.push_back(a.exponents[i]);
        coefficients.push_back(a.coefficients[i]);
        i++;
    }
    while (j < b.exponents.size()) {
        exponents.push_back(b.exponents[j]);
        coefficients.push_back(b.coefficients[j]);
        j++;
    }
}


int main() {
    SparsePoly A, B;

    A.read();
    A.display("Poly A: ");

    B.read();
    B.display("Poly B: ");

    SparsePoly C;
    C.add(A, B);
    C.display("Poly C: ");

    return 0;
}