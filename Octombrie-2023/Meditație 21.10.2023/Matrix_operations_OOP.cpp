#include <iostream>
using namespace std;
class Matrix {

private:
    int rows, cols;
    int data[100][100];

public:
    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
    }

    // Supraîncărcarea operatorului de citire (operator>>)
    friend istream& operator>>(istream& in, Matrix& matrix);

    // Supraîncărcarea operatorului de scădere (-)
    Matrix operator-( Matrix& other ) {
        if (rows != other.rows || cols != other.cols) {
            cerr << "Dimensiunile matricelor nu se potrivesc pentru scadere." << endl;
            return *this;
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Supraîncărcarea operatorului de înmulțire (*)
    Matrix operator*( Matrix& other) {
        if (cols != other.rows) {
            cerr << "Numărul de coloane al primei matrice nu se potrivește cu numărul de rânduri al celei de-a doua matrice pentru înmulțire." << std::endl;
            return *this;
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Afișarea matricei
    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Destructor pentru eliberarea memoriei
    ~Matrix() {
    }
};
istream& operator>>(istream& stream, Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                stream >> matrix.data[i][j];
            }
        }
        return stream;
}

int main() {
    int m, n, p, q;

    cout << "Introduceti dimensiunile primei matrice (rows+cols): ";
    cin >> m >> n;
    Matrix matrix1(m, n);
    cout << "Introduceti elementele primei matrice:\n";
    cin >> matrix1;

    cout << "Introduceti dimensiunile celei de-a doua matrice (rows+cols): ";
    cin >> p >> q;
    Matrix matrix2(p, q);
    cout << "Introduceti elementele celei de-a doua matrice:\n";
    cin >> matrix2;

    cout << "Matricea rezultata in urma scaderii matricelor:\n";
    Matrix result_subtraction = matrix1 - matrix2;
    result_subtraction.display();

    cout << "Matricea rezultata in urma inmultirii matricelor:\n";
    Matrix result_multiplication = matrix1 * matrix2;
    result_multiplication.display();

    return 0;
}
