#include<iostream>
using namespace std;

const int R=4, C=4; // dimensions of input matrix
void Spiral_traverse(int mat[R][C], int R, int C)
{
	int top=0, left=0, bottom=R-1, right=C-1; //defining the boundaries of matrix
	while(top <= bottom && left <= right)
	{
		// move left -> right
		for(int i=left; i<=right; i++)
		cout << mat[top][i] << " ";
		cout << endl;
		top++; // after traversing the first row, move down to next row 
		// move top -> bottom
		for(int i=top; i<=bottom; i++)
		cout << mat[i][right] <<" ";
		cout << endl;
		right--; // traversed the whole last column, now move left to the previous column 
		
		if(top <= bottom)
		{
			// move right -> left
			for(int i=right; i>=left; i--)
			cout << mat[bottom][i] << " ";
			cout << endl;
			bottom--; // after traversing the last row, move up to the previous row
		}
		
		if(left <= right)
		{
			// move bottom -> top
			for(int i=bottom; i>=top; i--)
			cout << mat[i][left] << " ";
			cout << endl;
			left++; //after traversing the first column, move right to the next column
		}
	}
}
// Driver's code
int main()
{
	cout << "Spiral Matrix Traversal : \n";
	int R=4, C=4;
	int mat[4][4] = {{1, 2, 3, 4}, 
	                 {5, 6, 7, 8},
	                 {9, 10, 11, 12},
	                 {13, 14, 15, 16}};
	                 
	Spiral_traverse(mat, R, C);
	cout << endl;
}



/*

Input :

 1  2  3  4 
 5  6  7  8
 9 10 11 12
13 14 15 16 

Output :

1 2 3 4
8 12 16
15 14 13
9 5
6 7
11
10

*/
