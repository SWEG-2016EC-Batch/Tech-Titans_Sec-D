## Pattern Generator
This file provide the pseudocode for the program(updated version of PatternsA file) that allows users to select and display various patterns based on their choice and the number of rows they enter.
--- 
### Pseudocode

1. **Start**
2. **Declare Variables**:
    - `patternchoice` (integer)
    - `row` (integer)
    - `Choice` (character)

3. **Print Discriptive Title**: 
    - "---patterns show---"

4. **Loop (Do While `Choice` is 'y' or 'Y')**:
    - Print Menu:
        - "Enter 1 for grid of numbers"
        - "Enter 2 for grid of alphabets from A to X"
        - "Enter 3 for Left half pyramid of numbers"
        - "Enter 4 for Right half pyramid of numbers"
        - "Enter 5 for Half pyramid of uppercase letters"
        - "Enter 6 for grid of lowercase letters a to e"
        - "Enter 7 for Hollow rectangle"
        - "Enter 8 for Inverted half pyramid"
        - "Enter 9 for Hollow Inverted half pyramid"
        - "Enter 10 for Full pyramid"
        - "Enter 11 for Inverted full pyramid"
        - "Enter 12 for Hollow full pyramid"
    - Prompt User: "Enter your choice: "
    - Read `patternchoice`

5. **Validate Input**:
    - If `patternchoice` is not valid (not in range 1-12):
        - Print "Invalid Input, Please enter the correct choice from the menu"
    - Else (if `patternchoice` is valid):
        - Prompt User: "Enter number of rows: "
        - Read `row`

6. **Switch Case on `patternchoice`**:
    - **Case 1**: Grid of numbers
        - Print "Grid of numbers"
        - Loop from 0 to `row` (rows)
            - Loop from 1 to `row` (columns)
                - Print the column number
            - Print newline

    - **Case 2**: Grid of alphabets from A to X
        - Print "Grid of alphabets from A to X"
        - Initialize `alpha` to 'A'
        - Loop from 0 to `row` (rows)
            - Loop from 0 to `row` (columns)
                - If `alpha` is less than or equal to 'X':
                    - Print `alpha`
                    - Increment `alpha`
            - Print newline

    - **Case 3**: Left half pyramid of numbers
        - Print "Left half pyramid of numbers"
        - Loop from 1 to `row` (rows)
            - Loop from 1 to current row number (columns)
                - Print the column number
            - Print newline

    - **Case 4**: Right half pyramid of numbers
        - Print "Right half pyramid of numbers"
        - Loop from 1 to `row` (rows)
            - Loop from `row` minus current row number to 0 (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - Print the column number
            - Print newline

    - **Case 5**: Half pyramid of uppercase letters
        - Print "Half pyramid of uppercase letters"
        - Loop from 0 to `row` (rows)
            - Loop from 'A' to 'A' plus current row number (columns)
                - Print the letter
            - Print newline

    - **Case 6**: Grid of lowercase letters a to e
        - Print "Grid of lowercase letters a to e"
        - Loop from 0 to `row` (rows)
            - Loop from 'a' to 'e' (columns)
                - Print the letter
            - Print newline

    - **Case 7**: Hollow rectangle
        - Print "Hollow rectangle"
        - Loop from 0 to `row` (rows)
            - Loop from 0 to `row` (columns)
                - If at border (first or last row or column):
                    - Print '*'
                - Else:
                    - Print space
            - Print newline

    - **Case 8**: Inverted half pyramid
        - Print "Inverted half pyramid"
        - Loop from `row` down to 1 (rows)
            - Loop from 1 to current row number (columns)
                - Print '*'
            - Print newline

    - **Case 9**: Hollow Inverted half pyramid
        - Print "Hollow Inverted half pyramid"
        - Loop from `row` down to 1 (rows)
            - Loop from 1 to current row number (columns)
                - If at border (first or last column or last row):
                    - Print '*'
                - Else:
                    - Print space
            - Print newline

    - **Case 10**: Full pyramid
        - Print "Full pyramid"
        - Loop from 1 to `row` (rows)
            - Loop from 1 to `row` minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - Print '*'
            - Print newline

    - **Case 11**: Inverted full pyramid
        - Print "Inverted full pyramid"
        - Loop from `row` down to 1 (rows)
            - Loop from 0 to `row` minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - Print '*'
            - Print newline

    - **Case 12**: Hollow full pyramid
        - Print "Hollow full pyramid"
        - Loop from 1 to `row` (rows)
            - Loop from 1 to `row` minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - If at border (first or last column or last row):
                    - Print '*'
                - Else:
                    - Print space
            - Print newline

7. **End Switch**

8. **Prompt User**: "Do you want to see other patterns?(y/n): "
9. **Read `Choice`**
    - If `Choice` is 'y' or 'Y':
        - Go to Step 3 (Menu)

10. **End Loop**

11. **Print Closing Message**:
    - "Thank you for exploring the patterns. Have a great day!"

12. **End**

