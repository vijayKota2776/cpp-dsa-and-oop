#include <iostream>
using namespace std;

class Matrix {
    unsigned short int m, n, q;
    int a[10][10], b[10][10], c[10][10]; 
    void product(); 

public:
    Matrix(); 
};
Matrix::Matrix() {
    cout << "Enter the number of rows in matrix A: ";
    cin >> m;
    cout << "Enter the number of columns in matrix A: ";
    cin >> n;

    cout << "Enter " << m * n << " elements of matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter the number of rows in matrix B (should be equal to columns of A): ";
    cin >> n;
    cout << "Enter the number of columns in matrix B (should be equal to rows of A): ";
    cin >> q;

    cout << "Enter " << n * q << " elements of matrix B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    product();
}
void Matrix::product() {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            c[i][j] = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "The resulting matrix after multiplication is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    Matrix obj;
    return 0;
}