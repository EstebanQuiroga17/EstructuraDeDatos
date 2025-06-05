#include "../Model/MatrixOperations.h"
#include <cstring>
#include <sstream>
#include <string>

class IntMatrixOperations : public MatrixOperations {
private:
    int** matrix;
    int size;
public:
    IntMatrixOperations(int** mat, int n) : matrix(mat), size(n) {}

    char* diagonal() override {
        std::ostringstream oss;
        for (int i = 0; i < size; ++i) {
            oss << matrix[i][i];
            if (i < size - 1) oss << " ";
        }
        std::string result = oss.str();
        char* cstr = new char[result.length() + 1];
        std::strcpy(cstr, result.c_str());
        return cstr;
    }

    char* secondDiagonal() override {
        std::ostringstream oss;
        for (int i = 0; i < size; ++i) {
            oss << matrix[i][size - i - 1];
            if (i < size - 1) oss << " ";
        }
        std::string result = oss.str();
        char* cstr = new char[result.length() + 1];
        std::strcpy(cstr, result.c_str());
        return cstr;
    }
};