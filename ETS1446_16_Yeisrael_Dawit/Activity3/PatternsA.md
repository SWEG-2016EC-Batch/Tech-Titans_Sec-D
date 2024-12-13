## Pattern Generator
--- 
This file provide the pseudocodefor a program that allows users to select and display various patterns based on their choice.

--- 

### Pseudocode
---
1. **Start**
2. **Declare Variables**: 
    - `patternchoice` (integer) - Stores the user's selection of the pattern the user wants to see.
    - `row` (integer) - Stores the number of rows for the chosen pattern.
    - `Choice` (character) - Stores the user's decision to continue exploring more patterns or to end the program.

3. **Print Descriptive Title**:
    - Display "---patterns show---" to introduce the program.
4. **Loop (Do While `Choice` is 'y' or 'Y')**: This loop will continue running as long as the user decides to keep viewing patterns.
    - Print Menu:
        - "***Menu***"
        - "Enter 1 to see 5x5 grid of numbers"
        - "Enter 2 to see 4x6 grid of alphabets from A to X"
        - "Enter 3 to see Left half pyramid of numbers"
        - "Enter 4 to see Right half pyramid of numbers"
        - "Enter 5 to see Half pyramid of uppercase letters"
        - "Enter 6 to see 5x5 grid of lowercase letters a to e"
        - "Enter 7 to see Hollow rectangle"
        - "Enter 8 to see Inverted half pyramid"
        - "Enter 9 to see Hollow Inverted half pyramid"
        - "Enter 10 to see Full pyramid"
        - "Enter 11 to see Inverted full pyramid"
        - "Enter 12 to see Hollow full pyramid"
    - Prompt the user: "Enter your choice: "
    - Read `patternchoice`
5. **Validate Input**:
    - If `patternchoice` is not valid (not in range 1-12):
        - Print "Invalid Input, please insert the correct choice from the menu."
    - Else (if `patternchoice` is valid):
        - Prompt the user to enter the number of rows by displaying "Enter number of rows: ".
        - Read the user's input into `row`.
6. **Switch Case on `patternchoice`**:
    - **Case 1**: 5x5 grid of numbers
        - Print "5x5 grid of numbers"
        - Loop from 0 to 5 (rows):
            - Loop from 1 to 5 (columns):
                - Print the column number
            - Print newline
    - **Case 2**: 4x6 grid of alphabets from A to X
        - Print "4x6 grid of alphabets from A to X"
        - Initialize a variable `alpha` to 'A'
        - Loop from 0 to 4 (rows):
            - Loop from 0 to 6 (columns):
                - If `alpha` is less than or equal to 'X':
                    - Print `alpha`
                    - Increment `alpha`
            - Print newline

    - **Case 3**: Left half pyramid of numbers
        - Print "Left half pyramid of numbers"
        - Loop from 1 to `row` (rows):
            - Loop from 1 to current row number (columns):
                - Print the column number
            - Print newline

    - **Case 4**: Right half pyramid of numbers
        - Print "Right half pyramid of numbers"
        - Loop from 1 to `row` (rows):
            - Loop from `row` minus current row number to 0 (spaces):
                - Print space
            - Loop from 1 to current row number (columns):
                - Print the column number
            - Print newline

    - **Case 5**: Half pyramid of uppercase letters
        - Print "Half pyramid of uppercase letters"
        - Loop from 0 to `row` (rows):
            - Loop from 'A' to 'A' plus current row number (columns):
                - Print the letter
            - Print newline

    - **Case 6**: 5x5 grid of lowercase letters a to e
        - Print "5x5 grid of lowercase letters a to e"
        - Loop from 0 to `row` (rows):
            - Loop from 'a' to 'e' (columns):
                - Print the letter
            - Print newline

    - **Case 7**: Hollow rectangle
        - Print "Hollow rectangle"
        - Loop from 0 to `row` (rows):
            - Loop from 0 to `row` (columns):
                - If at border (first or last row, or first or last column):
                    - Print '*'
                - Else:
                    - Print a space
            - Print newline

    - **Case 8**: Inverted half pyramid
        - Print "Inverted half pyramid"
        - Loop from `row` down to 1 (rows):
            - Loop from 1 to current row number (columns):
                - Print '*'
            - Print newline

    - **Case 9**: Hollow Inverted half pyramid
        - Print "Hollow Inverted half pyramid"
        - Loop from `row` down to 1 (rows):
            - Loop from 1 to current row number (columns):
                - If at border (first or last column, or last row):
                    - Print '*'
                - Else:
                    - Print a space
            - Print newline

    - **Case 10**: Full pyramid
        - Print "Full pyramid"
        - Loop from 1 to `row` (rows):
            - Loop from 1 to `row` minus current row number (spaces):
                - Print a space
            - Loop from 1 to current row number (columns):
                - Print '*'
            - Print newline

    - **Case 11**: Inverted full pyramid
        - Print "Inverted full pyramid"
        - Loop from `row` down to 1 (rows):
            - Loop from 0 to `row` minus current row number (spaces):
                - Print a space
            - Loop from 1 to current row number (columns):
                - Print '*'
            - Print newline

    - **Case 12**: Hollow full pyramid
        - Print "Hollow full pyramid"
        - Loop from 1 to `row` (rows):
            - Loop from 1 to `row` minus current row number (spaces):
                - Print a space
            - Loop from 1 to current row number (columns):
                - If at border (first or last column, or last row):
                    - Print '*'
                - Else:
                    - Print a space
            - Print newline

7. **End Switch**
8. **Prompt User**: 
   - Ask the user if the user wants to see other patterns by displaying "Do you want to see other patterns?(y/n): ".
   - Read the user's input into `Choice`.
9. **Check User's Decision**:
   - If `Choice` is 'y' or 'Y':
     - Go back to Step 4 (Menu).
10. **End Loop**: End of the do-while loop.
11. **Print Closing Message**: 
   - Display "Thank you for exploring the patterns. Have a great day!" to end the program.
12. **End**: Terminate the program.
---
