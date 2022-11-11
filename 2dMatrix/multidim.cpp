//Name : Jamadar Aiman
//Roll No : 35
#include <iostream>
using namespace std;

int main()
{
    int r, c, a[10][10], b[10][10], sum[10][10], i, j;

    cout << "Enter number of rows (between 1 and 10): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 10): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
     //display matrix A and B
       cout<<endl<<"1st matrix is\n";

     for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << a[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
    cout<<endl<<"2nd Matrix is \n" ;
	for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << b[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
  

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}