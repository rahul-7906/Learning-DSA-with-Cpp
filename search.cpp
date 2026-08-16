#include <iostream>

using namespace std;

int search( int mat[4][4],int n, int m, int key){
    int i = 0, j = m-1;
   while( i< n && j>= 0){
    if(mat[i][j] == key){
        cout << "Found at cell (" <<i << ","<< j<< ")";
        return true; 
    }
    else if (mat[i][j] > key){
        //left
        j-- ;
    }
    else{
        //down
        i++;
    }
   }

   cout << "KEY NOT FOUND";
   return false;
}

int main(){
    
    int matrix[4][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}};
     
    search(matrix,4,4,10);

    return 0;
}
