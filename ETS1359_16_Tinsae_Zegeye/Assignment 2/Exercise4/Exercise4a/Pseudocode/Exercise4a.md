# Exercise 4 A problem analysis and algorithm design
## 1.Rectangle With Numbers
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Rectangle With numbers
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 5.
    3.For each row, initialize the column counter (j) to 1.
    4.Loop through columns from 1 to 5.
    5.Print the number j followed by a space for each column.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 5.
    
### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 5 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to 5 
            3.2.1 Print j and a space 
            3.2.2 Increment j by 1 (j++) 
        3.3 Print a newline 
        3.4 Increment i by 1 (i++)
    4.End
## 2.Rectangle With Alphabets
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Rectangle with alphabets
#### Operations
    1.Initialize the character alpha to 'A'.
    2.Loop through rows from 1 to 4.
    3.For each row, initialize the column counter (j) to 1.
    4.Loop through columns from 1 to 6.
    5.Print the character alpha and a space, then increment alpha.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 4.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set alpha to 'A'
    3.Set i to 1
    4.Repeat while i is less than or equal to 4 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to 6 
            4.2.1 Print alpha and a space 
            4.2.2 Increment alpha by 1 (alpha++) 
            4.2.3 Increment j by 1 (j++) 
        4.3 Print a newline 
        4.4 Increment i by 1 (i++)
    5.End
## 3.Left Alligned Triangle With Numbers
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Left-aligned triangle shape 
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 5.
    3.For each row, initialize the column counter (j) to 1.
    4.Loop through columns from 1 up to the current row number.
    5.Print the number j followed by a space for each column.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 5.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 5 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to i 
            3.2.1 Print j and a space 
            3.2.2 Increment j by 1 (j++) 
        3.3 Print a newline 
        3.4 Increment i by 1 (i++)
    4.End
## 4.Right Alligned Triangle With Numbers
### Problem Analysis
#### Input
    1.No input from user
#### Output
    1.Right-aligned triangle shape with numbers
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 5.
    3.For each row, initialize a space counter (k) to the difference between 5 and the current row number.
    4.Print the appropriate number of spaces for alignment.
    5.For each row, initialize the column counter (j) to the current row number and print the numbers decreasing to 1.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 5.
### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 5 
        3.1 Set k to 5 - i 
        3.2 Repeat while k is greater than 0 
            3.2.1 Print two spaces 
            3.2.2 Decrement k by 1 (k--) 
        3.3 Set j to i 
        3.4 Repeat while j is greater than or equal to 1 
            3.4.1 Print j and a space 
            3.4.2 Decrement j by 1 (j--) 
            3.5 Print a newline 3.6 Increment i by 1 (i++)
    4.End
## 5.Left Alligned Triangle With Alphabets
### Problem Analysis
#### Input
    1.No input from the user 
#### Output
    1.Left-aligned triangle shape with letters increasing from 'A' in each row.
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 5.
    3.For each row, initialize the character alpha to 'A'.
    4.Loop through columns from 1 to the current row number.
    5.Print the character alpha and a space, then increment alpha.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 5.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 5 
        3.1 Set alpha to 'A' 
        3.2 Set j to 1 
        3.3 Repeat while j is less than or equal to i 
            3.3.1 Print alpha and a space   
            3.3.2 Increment alpha by 1 
            3.3.3 Increment j by 1 (j++) 
        3.4 Print a newline
        3.5 Increment i by 1 (i++)
    4.End
## 6. Rectangle With Alphabets Having the Same rows
### Problem Analysis
#### Input
    1.No input from the user 
#### Output
    1.Rectangle with alphabets that have the same rows
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 5.
    3.For each row, initialize the character alpha to 'a'.
    4.Loop through columns from 1 to 5.
    5.Print the character alpha and a space, then increment alpha.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 5.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 5 
        3.1 Set alpha to 'a' 
        3.2 Set j to 1 
        3.3 Repeat while j is less than or equal to 5 
            3.3.1 Print alpha and a space 
            3.3.2 Increment alpha by 1 
            3.3.3 Increment j by 1 (j++) 
        3.4 Print a newline 
        3.5 Increment i by 1 (i++)
    4.End
## 7. Hollow Rectangle 
### Problem Analysis
#### Input
    1.No input from the user 
#### Output
    1.Rectangle with dimensions 7 rows by 8 columns, with stars (*) on the borders and spaces in the interior.
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 7.
    3.For each row, loop through columns from 1 to 8.
    4.Print a star (*) if it is on the border (i.e., if i is 1, i is 7, j is 1, or j is 8).
    5.Print a space otherwise.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i exceeds 7.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 
    3.Repeat while i is less than or equal to 7 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to 8 
            3.2.1 If i is 1 or i is 7 or j is 1 or j is 8, print " * " 
            3.2.2 Else, print " " 
            3.2.3 Increment j by 1 (j++) 
        3.3 Print a newline 
        3.4 Increment i by 1 (i++)
    4.End
## 8.Inverted Left Alligned Triangle
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Left-aligned inverted triangle shape with stars (*).
#### Operations
    1.Initialize the row counter (i) to 6.
    2.Loop through rows from 6 down to 1.
    3.For each row, initialize the column counter (j) to 1.
    4.Loop through columns from 1 up to the current row number.
    5.Print a star (*) and a space for each column.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i is less than 1.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 6
    3.Repeat while i is greater than or equal to 1 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to i 
            3.2.1 Print " * " and a space 
            3.2.2 Increment j by 1 (j++) 
        3.3 Print a newline 
        3.4 Decrement i by 1 (i--)
    4.End
## 9.Hollow Inverted Left Alligned Triangle
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Left-aligned hollow inverted triangle shape 
#### Operations
    1.Initialize the row counter (i) to 6.
    2.Loop through rows from 6 down to 1.
    3.For each row, initialize the column counter (j) to 1.
    4.Loop through columns from 1 up to the current row number.
    5.Print a star (*) if it is on the border (i.e., if i is 6, i is 1, j is 1, or j is equal to the current row number), otherwise print a space.
    6.Print a newline after completing each row.
    7.Repeat the process until the value of i is less than 1.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 6
    3.Repeat while i is greater than or equal to 1 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to i 
            3.2.1 If i is 6 or i is 1 or j is 1 or j is equal to i, print " * " 
            3.2.2 Else, print " " 
            3.2.3 Increment j by 1 (j++) 
        3.3 Print a newline 
        3.4 Decrement i by 1 (i--)
    4.End
## 10.Full Pyramid
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Full pyramid shape
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 6.
    3.For each row, initialize the space counter (j) to 1.
    4.Loop through columns to print spaces for alignment, from 1 up to 6−i
    5.Initialize the star counter (k) to 1.
    6.Loop through columns to print stars, from 1 up to the current row number.
    7.Print a newline after completing each row.
    8.Repeat the process until the value of i exceeds 6.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 6 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to 6 - i 
            3.2.1 Print a space (" ") 
            3.2.2 Increment j by 1 (j++) 
        3.3 Set k to 1 
        3.4 Repeat while k is less than or equal to i 
            3.4.1 Print " * " and a space 
            3.4.2 Increment k by 1 (k++) 
        3.5 Print a newline
        3.6 Increment i by 1 (i++)
    4.End
## 11.Inverted Full Pyramids
### Problem Analysis
#### Input
    1.No input from user
#### Output
    1.Inverted full pyramid
#### Operations
    1.Initialize the row counter (i) to 6.
    2.Loop through rows from 6 down to 1.
    3.For each row, initialize the space counter (j) to 1.
    4.Loop through columns to print spaces for alignment, from 1 up to 6−i
    5.Initialize the star counter (k) to 1.
    6.Loop through columns to print stars, from 1 up to the current row number.
    7.Print a newline after completing each row.
    8.Repeat the process until the value of i is less than 1.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 6
    3.Repeat while i is greater than or equal to 1 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to 6 - i 
            3.2.1 Print a space (" ") 
            3.2.2 Increment j by 1 (j++) 
        3.3 Set k to 1 
        3.4 Repeat while k is less than or equal to i
            3.4.1 Print " * " and a space 
            3.4.2 Increment k by 1 (k++) 
        3.5 Print a newline 3.6 Decrement i by 1 (i--)
    4.End
## 12.Hollow Full Pyramid
### Problem Analysis
#### Input
    1.No input from user 
#### Output
    1.Hollow inverted pyramid
#### Operations
    1.Initialize the row counter (i) to 1.
    2.Loop through rows from 1 to 6.
    3.For each row, initialize the space counter (j) to 1.
    4.Loop through columns to print spaces for alignment, from 1 up to 6−i
    5.Initialize the star counter (k) to 1.
    6.Loop through columns to print stars or spaces:
        Print a star (*) if it is on the border (i.e., if i is 1, i is 6, k is 1, or k is equal to the current row number),
        Otherwise, print a space.
    7.Print a newline after completing each row.
    8.Repeat the process until the value of i exceeds 6.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Set i to 1
    3.Repeat while i is less than or equal to 6 
        3.1 Set j to 1 
        3.2 Repeat while j is less than or equal to 6 - i 
            3.2.1 Print a space (" ") 
            3.2.2 Increment j by 1 (j++) 
        3.3 Set k to 1 
        3.4 Repeat while k is less than or equal to i 
            3.4.1 If i is 1 or i is 6 or k is 1 or k is equal to i, print " * " 
            3.4.2 Else, print " " 
            3.4.3 Increment k by 1 (k++) 
        3.5 Print a newline 
        3.6 Increment i by 1 (i++)
    4.End