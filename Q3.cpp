/* Given a 2-D Array which is composed of 0s and 1s, find the number of connected 1s
   1 1 1 1
   0 0 1 1
   1 0 1 1
   1 1 0 1
*/

/*ALGORITHM
1. Start traversing the matrix.
2. If any 1 is encountered call the helper function.
3. Helper function will first check all the supplied values to enable recusion.
4. Change the value to 0, in order to avoid revisiting that node again.
5. Traverse to adjacent elements.
6. Return value back to calling function.
7. Repeat steps 2-6, until whole array is traversed.
*/

#include <iostream>

using namespace std;

int scan(int[][4], int, int, int, int);     //Declaring helper function which will scan the adjecent elements

int main() {

    //Defining matrix
    int matrix[4][4] = {{1,1,1,1}, {0,0,1,1}, {1,0,1,1}, {1,1,0,1}};
    int rows = 4;
    int columns = 4;
    int connected1s = 0;    //this will store number of connected 1's
    
    //Driving code
    for(int x=0; x < rows; x++ ) {
        for(int y=0; y < columns; y++) {
            if(matrix[x][y]==1) {   //action only needed if matrix[x][y] is 1.
                connected1s += scan(matrix, x, y, rows, columns);   //call the helper function
            }
        }
    }

    //Display the result
    cout<<"Connected Ones = "<<connected1s;
}

/*Defining the helper function
-> Check if supplied indexes aren't out of bounds and value isn't 0.
-> make the value 0.
-> search it's neighbours.
-> return 1 to the main() if connected 1's are found.
*/
int scan(int matrix[][4], int x, int y, int rows, int columns) {

    //return 0 if supplied indexes are out of bound or value is already 0.  
    if(x<0 || x>=rows || y<0 || y>=columns || matrix[x][y]==0) {
        return 0;
    }
    
    matrix[x][y] = 0;   //make the value 0 to avoid revisiting it again

    //visit adjacent elements 
    scan(matrix, x+1, y, rows, columns);    //right
    scan(matrix, x-1, y, rows, columns);    //left  
    scan(matrix, x, y+1, rows, columns);    //down
    scan(matrix, x, y-1, rows, columns);    //up
    
    return 1;
}
