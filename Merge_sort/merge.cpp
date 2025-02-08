#include <iostream>
using namespace std;
class MergeArray 
{ 
    short int a[50], b[50], c[100];
    unsigned short int m, n;
    void process(); 
    public:
        MergeArray();
};
MergeArray::MergeArray() {
    cout << "Enter the number of elements in array A (in ascending order): ";
    cin >> m;
    cout << "Enter the number of elements in array B (in ascending order): ";
    cin >> n;
    cout << "Enter " << m << " elements for array A: ";
    for (int i = 0; i < m; i++)
        cin >> a[i];
    cout << "Enter " << n << " elements for array B: ";
    for (int j = 0; j < n; j++)
        cin >> b[j];
    process(); 
}
void MergeArray::process() {
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < m && j < n; k++) {
        if (a[i] < b[j])
            c[k] = a[i++];
        else
            c[k] = b[j++];
    }
    while (i < m) {
        c[k++] = a[i++];
    }
    while (j < n) {
        c[k++] = b[j++];
    }
    cout << "The contents of the merged array C: ";
    for (int x = 0; x < (m + n); x++) {
        cout << c[x] << " ";
    }
    cout << endl;
}
int main() {
    MergeArray M; 
}