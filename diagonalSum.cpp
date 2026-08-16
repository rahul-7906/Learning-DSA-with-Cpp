#include <iostream>

using namespace std;

void diagonalSum(int mat[4][4],int n, int m ) {
    int sum;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i=j){
                sum+= mat[i][j];
            } else if(j = n-i-1){
                sum+= mat[i][j];
            } 
        }
    }
    cout << "Sum is : " << sum;
    
}

int main(){
    
    int matrix[4][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}};
    
    diagonalSum(matrix,4,4);

    return 0;
}