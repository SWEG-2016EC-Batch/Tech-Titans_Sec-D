## Pattern Generator
This pseudocode outlines a program that allows users to select and display various patterns based on their choice.
### Pseudocode

#### **Start**
1. **Declare Variables**:
    - `Choice` (character)
    - `patternchoice` (integer)

2. **Print Title**: 
    - "---patterns show---"

3. **Loop (Do While Choice is 'y' or 'Y')**:
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
    - Prompt User: "Enter your choice: "
    - Read `patternchoice`

4. **Validate Input**:
    - If `patternchoice` is not valid (not in range 1-12):
        - Print "Invalid Input, please insert the correct choice from the menu."
    - Else (if `patternchoice` is valid):

5. **Switch Case on `patternchoice`**:
    - **Case 1**: 5x5 grid of numbers
        - Print "5x5 grid of numbers"
        - Loop from 0 to 5 (rows)
            - Loop from 1 to 5 (columns)
                - Print the column number

    - **Case 2**: 4x6 grid of alphabets from A to X
        - Print "4x6 grid of alphabets from A to X"
        - Initialize `alpha` to 'A'
        - Loop from 0 to 4 (rows)
            - Loop from 0 to 6 (columns)
                - If `alpha` is less than or equal to 'X':
                    - Print `alpha`
                    - Increment `alpha`

    - **Case 3**: Left half pyramid of numbers
        - Print "Left half pyramid of numbers"
        - Loop from 1 to 5 (rows)
            - Loop from 1 to current row number (columns)
                - Print the column number

    - **Case 4**: Right half pyramid of numbers
        - Print "Right half pyramid of numbers"
        - Loop from 1 to 5 (rows)
            - Loop from 5 minus current row number to 0 (columns) (for spaces)
                - Print space
            - Loop from current row number down to 1 (columns)
                - Print the column number

    - **Case 5**: Half pyramid of uppercase letters
        - Print "Half pyramid of uppercase letters"
        - Loop from 0 to 5 (rows)
            - Loop from 'A' to 'A' plus current row number (columns)
                - Print the letter

    - **Case 6**: 5x5 grid of lowercase letters a to e
        - Print "5x5 grid of lowercase letters a to e"
        - Loop from 0 to 5 (rows)
            - Loop from 'a' to 'e' (columns)
                - Print the letter

    - **Case 7**: Hollow rectangle
        - Print "Hollow rectangle"
        - Loop from 0 to 7 (rows)
            - Loop from 0 to 8 (columns)
                - If at border (first or last row or column):
                    - Print '*'
                - Else:
                    - Print space

    - **Case 8**: Inverted half pyramid
        - Print "Inverted half pyramid"
        - Loop from 6 down to 1 (rows)
            - Loop from 1 to current row number (columns)
                - Print '*'

    - **Case 9**: Hollow Inverted half pyramid
        - Print "Hollow Inverted half pyramid"
        - Loop from 6 down to 1 (rows)
            - Loop from 1 to current row number (columns)
                - If at border (first or last column or last row):
                    - Print '*'
                - Else:
                    - Print space

    - **Case 10**: Full pyramid
        - Print "Full pyramid"
        - Loop from 1 to 6 (rows)
            - Loop from 1 to 6 minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - Print '*'

    - **Case 11**: Inverted full pyramid
        - Print "Inverted full pyramid"
        - Loop from 6 down to 1 (rows)
            - Loop from 0 to 6 minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - Print '*'

    - **Case 12**: Hollow full pyramid
        - Print "Hollow full pyramid"
        - Loop from 1 to 6 (rows)
            - Loop from 1 to 6 minus current row number (spaces)
                - Print space
            - Loop from 1 to current row number (columns)
                - If at border (first or last column or last row):
                    - Print '*'
                - Else:
                    - Print space

6. **End Switch**

7. **Prompt User**: "Do you want to see other patterns?(y/n): "
8. **Read `Choice`**
    - If `Choice` is 'y' or 'Y':
        - Go to Step 3 (Menu)

9. **End Loop**

10. **Print Closing Message**:
    - "Thank you for exploring the patterns. Have a great day!"

11. **End**

