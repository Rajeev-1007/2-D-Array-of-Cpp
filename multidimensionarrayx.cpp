#include<iostream>
using namespace std;
int main()
{
    int row1,col1,row2,col2;
    int arr1[4][4];
    int arr2[4][4];
    int mult[4][4];
    cout<<"Enter the number of rows of matrix1 : ";
    cin>>row1;
    cout<<"Enter the number columns of matrix1 : ";
    cin>>col1;
    cout<<"Enter the number of rows of matrix2 : ";
    cin>>row2;
    cout<<"Enter the number columns of matrix2 : ";
    cin>>col2;
    
    if(row1==row2 && col1==col2){
    
    cout<<"Enter the matrix1 elements row-wise: "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<"Elememt["<<i<<"]["<<j<<"]: ";
            cin>>arr1[i][j];
        }
    }
    cout<<"The matrix1 is: "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0; j<col1;j++){
            cout<<arr1[i][j]<<" ";
        }
    cout<<endl;
        
    }
    cout<<"Enter the matrix2 elements row-wise: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<"Elememt["<<i<<"]["<<j<<"]: ";
            cin>>arr2[i][j];
        }
    }
    cout<<"The matrix2 is: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0; j<col2;j++){
            cout<<arr2[i][j]<<" ";
        }
    cout<<endl;
        
    }
    
      for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
    mult[i][j] = arr1[i][j] * arr2[i][j];
        }
      }
     
     cout<<"Multiplication of the two matrices is: "<<endl;
     for(int i=0;i<row1;i++){
        for(int j=0; j<col1;j++){
            cout<<mult[i][j]<<" ";
        }
    cout<<endl;
   
}
}
else
{
    cout<<"The matrix is of different size are not equal.";
}
return 0;
}













