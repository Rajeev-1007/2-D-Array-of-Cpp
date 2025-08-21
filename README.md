# 2-D-Array-of-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: To study and implement C++ 2D Array - Matrices.

Software Used: VS code.

Theory: A 2D array in C++ is a structured collection of elements arranged in rows and columns. It is used to represent matrices, grids, or tabular data. Each element is accessed using two indices: one for the row and one for the column. 

Syntax: 

    data_type array_name[row_size][column_size];

This creates a fixed-size matrix where each cell holds a value of the specified data type. The memory layout of a 2D array in C++ follows row-major order, meaning all elements of a row are stored contiguously before moving to the next row.
To process a 2D array, nested loops are commonly used. The outer loop iterates through rows, and the inner loop through columns. This structure allows systematic access to each element.
2D arrays are useful for performing operations like addition, subtraction, transposition, and searching within matrix-like data. They are foundational in algorithms involving dynamic programming, image processing, and simulations.


Algorithm:

1) Algoritm of the code matrix input and displaying.
a. Start
b. Declare integer variables: rows, cols, i, j
c. Prompt user to enter number of rows → store in rows
d. Prompt user to enter number of columns → store in cols
e. Declare a 2D array m1[20][20] to store matrix elements
f. Display message: "Enter elements for the matrix"
g. Loop through each row i from 0 to rows - 1
h. Loop through each column j from 0 to cols - 1
i. Prompt user to enter element at position [i][j]
j. Store input in m1[i][j]
k. Display message: "The matrix is"
l. Loop through each row i from 0 to rows - 1
m. Loop through each column j from 0 to cols - 1
n. Print m1[i][j] followed by a space
o. After each row, print a newline
p. End

2) Algorithm of the code addition of 2D Array Matrix



