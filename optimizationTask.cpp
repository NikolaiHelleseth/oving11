#include "Stopwatch.h"
#include <vector>
#include <iostream>
#include <cmath>

// Utdelt kode til oppgave 3

void setDiagonalValue(std::vector<double>& matrix, double newValue){
    int matrix_col = static_cast<int>(sqrt(matrix.size()));
    for (int i = 0; i < matrix_col; i++){
            int diagonal_index = i * (matrix_col+1);
            matrix.at(diagonal_index) = newValue;
        }

}

double sumMatrix(std::vector<double> matrix){
    double sum;
    for (int i = 0; i < matrix.size(); i++){
            double value = matrix.at(i);
            sum += value;            
        }
    return sum;
}

void optimizationTask() {
    
    const int matrixSize = 10000;

    // Create a matrix with zeros
    // lager 1d matrise isteden for 2d for å gjere det cach friendly 
    std::vector<double> matrix;

    double num_element = pow(matrixSize,2);
    // hindrer realokering og kopiering 
    matrix.reserve(num_element);
    for (int i = 0; i < num_element; i++){
        matrix.push_back(i);
    }

    // Set all elements on the diagonal to 0.41
    setDiagonalValue(matrix, 0.41);
    
    // Sum all elements in the matrix
    double total = sumMatrix(matrix);

    double coolerNumber = total + 2;
    std::cout << "TDT" << coolerNumber << std::endl;
}
size_t