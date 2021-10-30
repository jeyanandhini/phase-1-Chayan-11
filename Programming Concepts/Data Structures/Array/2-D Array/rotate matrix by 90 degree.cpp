/*

First find the transpose the given matrix, and then reverse the content of individual rows to get the resultant 90 degree clockwise rotated matrix.

1  2  3                                                1  4  7                                                                 7  4  1

4  5  6        ——Transpose——>    2  5  8         —-Reverse individual rows—->    8  5  2     (Resultant matrix)

7  8  9                                                3  6  9                                                                 9  6  3

*/


#include<iostream>
using namespace std;

const int R=4, C=4, n=4;
void rotate_90_degrees(int mat[R][C])
{
	// Transpose of matrix
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            swap(mat[i][j], mat[j][i]);
    // reverse the individual rows 
    for(int i=0; i<n; i++)
    {
        int low=0, high=n-1;
        while(low < high)
        {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
}

int main()
{
    cout<<"Rotated Matrix = \n";
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    
    rotate_90_degrees(mat);
    cout<<endl;
}

/*

Rotated Matrix =
4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13

*/
