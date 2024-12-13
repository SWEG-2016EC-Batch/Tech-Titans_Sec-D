# Exercise 4 B Problem Analysis and algoritm design
## 1.Rectangle With Numbers
### Problem Analysis
#### Input
    1.Number of rows
    2.Number of columns
#### Output
    1.Rectangle shape with numbers
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Prompt the user to enter the number of columns.
    3.Loop through rows from 1 to the specified number of rows.
    4.For each row, loop through columns from 1 to the specified number of columns.
    5.Print the number j followed by a space for each column.
    6.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Prompt the user to enter the number of columns and read the input into cols.
    4.Set i to 1
    5.Repeat while i is less than or equal to rows 
        5.1 Set j to 1 
        5.2 Repeat while j is less than or equal to cols 
            5.2.1 Print j and a space 
            5.2.2 Increment j by 1 (j++) 
        5.3 Print a newline 
        5.4 Increment i by 1 (i++)
    4.End

## 2.Rectangle With Alphabets
### Problem Analysis
#### Input
    1.Number of rows
    2.Number of columns
#### Output
    1.Rectangle shape with alphabets
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Prompt the user to enter the number of columns.
    3.Initialize the character alpha to 'A'.
    4.Loop through rows from 1 to the specified number of rows.
    5.For each row, loop through columns from 1 to the specified number of columns.
    6.Print the character alpha followed by a space, then increment alpha.
    7.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Prompt the user to enter the number of columns and read the input into cols.
    4.Set alpha to 'A'
    5.Set i to 1
    6.Repeat while i is less than or equal to rows 
        6.1 Set j to 1 
        6.2 Repeat while j is less than or equal to cols 
            6.2.1 Print alpha and a space 
            6.2.2 Increment alpha by 1 (alpha++) 
            6.2.3 Increment j by 1 (j++) 
        6.3 Print a newline 
        6.4 Increment i by 1 (i++)
    7.End

## 3.Left Aligned Triangle With Numbers
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Left-aligned triangle shape with numbers 
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from 1 to the specified number of rows.
    3.For each row, loop through columns from 1 up to the current row number.
    4.Print the number j followed by a space for each column.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to 1
    4.Repeat while i is less than or equal to rows 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to i 
            4.2.1 Print j and a space 
            4.2.2 Increment j by 1 (j++) 
        4.3 Print a newline 
        4.4 Increment i by 1 (i++)
    5.End

## 4.Right Aligned Triangle With Numbers
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Right-aligned triangle shape with numbers 
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from 1 to the specified number of rows.
    3.For each row, loop through columns to print spaces for alignment, from 1 up to rows − i.
    4.Loop through columns from the current row number down to 1.
    5.Print the number j followed by a space for each column.
    6.Print a newline after completing each row.
    
### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to 1
    4.Repeat while i is less than or equal to rows 
        4.1 Set k to rows - i 
        4.2 Repeat while k is greater than 0 
            4.2.1 Print two spaces 
            4.2.2 Decrement k by 1 (k--) 
        4.3 Set j to i 
        4.4 Repeat while j is greater than or equal to 1 
            4.4.1 Print j and a space 
            4.4.2 Decrement j by 1 (j--) 
        4.5 Print a newline 
        4.6 Increment i by 1 (i++)
    5.End

## 5.Left Aligned Triangle With Alphabets
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Left-aligned triangle shape with alphabets
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from 1 to the specified number of rows.
    3.Initialize the character alpha to 'A' for each row.
    4.Loop through columns from 1 up to the current row number.
    5.Print the character alpha followed by a space, then increment alpha.
    6.Print a newline after completing each row.
    
### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to 1
    4.Repeat while i is less than or equal to rows 
        4.1 Set alpha to 'A' 
        4.2 Set j to 1 
        4.3 Repeat while j is less than or equal to i 
            4.3.1 Print alpha and a space 
            4.3.2 Increment alpha by 1 
            4.3.3 Increment j by 1 (j++) 
        4.4 Print a newline 
        4.5 Increment i by 1 (i++)
    5.End

## 6.Rectangle With Alphabets Having The Same Row
### Problem Analysis
#### Input
    1.Number of rows
    2.Number of columns
#### Output
    1.Rectangle shape where each row contains the same sequence of alphabets starting from 'a'.
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Prompt the user to enter the number of columns.
    3.Loop through rows from 1 to the specified number of rows.
    4.For each row, initialize the character alpha to 'a'.
    5.Loop through columns from 1 to the specified number of columns.
    6.Print the character alpha followed by a space, then increment alpha.
    7.Print a newline after completing each row.
    
### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Prompt the user to enter the number of columns and read the input into cols.
    4.Set i to 1
    5.Repeat while i is less than or equal to rows 
        5.1 Set alpha to 'a'
        5.2 Set j to 1 
        5.3 Repeat while j is less than or equal to cols 
            5.3.1 Print alpha and a space   
            5.3.2 Increment alpha by 1 
            5.3.3 Increment j by 1 (j++) 
        5.4 Print a newline 
        5.5 Increment i by 1 (i++)
    6.End

## 7.Hollow Rectangle
### Problem Analysis
#### Input
    1.Number of rows
    2.Number of columns
#### output
    1.Rectangle shape with stars (*) on the borders and spaces in the interior.
#### Operations
    1.prompt the user to enter the number of rows.
    2.Prompt the user to enter the number of columns.
    3.Loop through rows from 1 to the specified number of rows.
    4.For each row, loop through columns from 1 to the specified number of columns.
    5.Print a star (*) if it is on the border (i.e., if i is 1, i is equal to the number of rows, j is 1, or j is equal to the number of columns), otherwise print a space.
    6.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Prompt the user to enter the number of columns and read the input into cols.
    4.Set i to 1
    5.Repeat while i is less than or equal to rows 
        5.1 Set j to 1 
        5.2 Repeat while j is less than or equal to cols 
            5.2.1 If i is 1 or i is equal to rows or j is 1 or j is equal to cols, print " * " 
            5.2.2 Else, print " " 
            5.2.3 Increment j by 1 (j++) 
        5.3 Print a newline 
        5.4 Increment i by 1 (i++)
    6.End

## 8.Inverted Left Aligned Triangle
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.An inverted left-aligned triangle shape with stars (*).
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from the specified number of rows down to 1.
    3.For each row, loop through columns from 1 up to the current row number.
    4.Print a star (*) followed by a space for each column.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to rows
    4.Repeat while i is greater than or equal to 1 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to i 
            4.2.1 Print " * " and a space 
            4.2.2 Increment j by 1 (j++) 
        4.3 Print a newline 
        4.4 Decrement i by 1 (i--)
    5.End

## 9.Inverted Left Aligned Hollow Triangle
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Inverted left-aligned triangle shape with stars (*) on the borders and spaces in the interior.
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from the specified number of rows down to 1.
    3.For each row, loop through columns from 1 up to the current row number.
    4.Print a star (*) if it is on the border (i.e., if i is equal to the number of rows, i is 1, j is 1, or j is equal to the current row number), otherwise print a space.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to rows
    4.Repeat while i is greater than or equal to 1 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to i 
            4.2.1 If i is equal to rows or i is 1 or j is 1 or j is equal to i, print " * " 
            4.2.2 Else, print " " 
            4.2.3 Increment j by 1 (j++) 
        4.3 Print a newline.
        4.4 Decrement i by 1 (i--)
    5.End

## 10.Full Pyramid
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Full pyramid shape with stars (*)
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from 1 to the specified number of rows.
    3.For each row, loop through columns to print spaces for alignment, from 1 up to rows − i.
    4.Loop through columns to print stars followed by a space, from 1 up to the current row number.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to 1
    4.Repeat while i is less than or equal to rows 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to rows - i 
            4.2.1 Print a space 
            4.2.2 Increment j by 1 (j++) 
        4.3 Set k to 1 
        4.4 Repeat while k is less than or equal to i 
            4.4.1 Print "* " and a space 
            4.4.2 Increment k by 1 (k++) 
        4.5 Print a newline 
        4.6 Increment i by 1 (i++)
    5.End

## 11.Inverted Full Pyramid
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Inverted full pyramid shape with stars (*)
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from the specified number of rows down to 1.
    3.For each row, loop through columns to print spaces for alignment, from 1 up to rows − i.
    4.Loop through columns to print stars followed by a space, from 1 up to the current row number.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to rows
    4.Repeat while i is greater than or equal to 1 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to rows - i 
            4.2.1 Print a space 
            4.2.2 Increment j by 1 (j++) 
        4.3 Set k to 1 
        4.4 Repeat while k is less than or equal to i 
            4.4.1 Print "* " and a space 
            4.4.2 Increment k by 1 (k++) 
        4.5 Print a newline 
        4.6 Decrement i by 1 (i--)
    5.End

## 12.Hollow Full Pyramid
### Problem Analysis
#### Input
    1.Number of rows
#### Output
    1.Full pyramid shape with stars (*)
#### Operations
    1.Prompt the user to enter the number of rows.
    2.Loop through rows from 1 to the specified number of rows.
    3.For each row, loop through columns to print spaces for alignment, from 1 up to rows − i.
    4.Loop through columns to print stars or spaces:
        Print a star (*) if it is on the border (i.e., if i is 1, i is equal to the number of rows, k is 1, or k is equal to the current row number),
        Otherwise, print a space.
    5.Print a newline after completing each row.

### Algorithm Design
#### Pseudocode
    1.Start
    2.Prompt the user to enter the number of rows and read the input into rows.
    3.Set i to 1
    4.Repeat while i is less than or equal to rows 
        4.1 Set j to 1 
        4.2 Repeat while j is less than or equal to rows - i 
            4.2.1 Print a space 
            4.2.2 Increment j by 1 (j++) 
        4.3 Set k to 1 
        4.4 Repeat while k is less than or equal to i 
            4.4.1 If i is 1 or i is equal to rows or k is 1 or k is equal to i, print "* " 
            4.4.2 Else, print " " 
            4.4.3 Increment k by 1 (k++) 
        4.5 Print a newline 
        4.6 Increment i by 1 (i++)
    5.End
