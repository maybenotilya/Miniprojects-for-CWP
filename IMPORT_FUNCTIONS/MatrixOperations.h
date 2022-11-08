int** createMatrix(const size_t &r, const size_t &c);
void fillMatrixWithRandomIntegers (int** matrix, const size_t &r, const size_t &c, const int &limit = 5000);
void printMatrix (int ** matrix, const size_t &r, const size_t &c);
void clearMatrixMemory (int ** matrix, const size_t &r, const size_t &c);
void transpouseMatrix (int** matrix, const size_t &n);
int** multiplyMatrix(int** matrix1, const size_t &r1, const size_t &c1, int** matrix2, const size_t &r2, const size_t &c2);