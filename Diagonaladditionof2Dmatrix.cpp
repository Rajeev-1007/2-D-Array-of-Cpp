#include<iostream>
using namespace std;

int main() {
    int r, c, i, j;
    cout<<"Enter matrix dimension: ";
    cin>>r>>c;
    int ar[r][c], add=0, sum=0;
    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<"Enter element-("<<i<<j<<"): ";
                cin>>ar[i][j];
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==j){
                    add+=ar[i][j];
                }
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i+j==(r-1)){
                    sum+=ar[i][j];
                }
            }
        }
        cout<<endl<<"Sum of diagnol-1: "<<add<<endl;
        cout<<"Sum of diagnol-2: "<<sum<<endl;
    }
    else{
        cout<<"No diagnol addition"<<endl;
    }
}