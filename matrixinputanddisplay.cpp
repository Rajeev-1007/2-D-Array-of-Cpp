#include <iostream>
using namespace std; 

int main() {
    int rows,cols,i,j;
    
    cout <<"Enter number of rows: ";
    cin >> rows;
    cout <<"Enter number of columns: ";
    cin >> cols;
    
    int m1[20][20];
    cout <<"Enter elements for the matrix:\n";
    for (i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            cout << "Element " << i << " " << j << ": ";
            cin >> m1[i][j];
        }
    }
    cout <<"The matrix is:\n";
    for (i=0; i<rows; ++i){
        for (j=0; j<cols; ++j){
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}