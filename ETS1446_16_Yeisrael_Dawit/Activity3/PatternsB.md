## Pattern Generator
--- 
This file provide the pseudocode for the program(updated version of PatternsA file) that allows users to select and display various patterns based on their choice and the number of rows they enter.

---
### Pseudocode
--- 
1. **Start**
2. **Declare Variables**:
    - `patternchoice` (integer): Variable to store the user's choice of pattern.
    - `row` (integer): Variable to store the number of rows for the pattern.
    - `Choice` (character): Variable to determine if the user wants to continue or end the program.
3. **Print Descriptive Title**: 
    - Display "---patterns show---" as a title to introduce the program and give context to the user.
4. **Loop (Do While `Choice` is 'y' or 'Y')**: This loop continues to display the menu and process user choices until the user decides to exit.
    - Print Menu:
        - Display the options for different patterns to the user:
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
    - **Prompt User**: "Enter your choice: " - Asks the user to choose an option from the menu.
    - **Read `patternchoice`**: Reads and stores the user's choice in the variable `patternchoice`.

5. **Validate Input**:
    - If `patternchoice` is not valid (not in range 1-12):
        - **Print Error Message**: "Invalid Input, Please enter the correct choice from the menu" - Informs the user of invalid input.
    - Else (if `patternchoice` is valid):
        - **Prompt User**: "Enter number of rows: " - Asks the user to enter the number of rows for the chosen pattern.
        - **Read `row`**: Reads and stores the number of rows in the variable `row`.

6. **Switch Case on `patternchoice`**: Based on the user's choice, execute the corresponding block of code to display the selected pattern.
    - **Case 1**: Grid of numbers
        - **Print Title**: "Grid of numbers"
        - **Nested Loops**: 
            - Outer Loop: Loop from 0 to `row` to iterate through each row.
            - Inner Loop: Loop from 1 to `row` to iterate through each column and print the column number.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 2**: Grid of alphabets from A to X
        - **Print Title**: "Grid of alphabets from A to X"
        - **Initialize `alpha` to 'A'**: Start with the first alphabet.
        - **Nested Loops**:
            - Outer Loop: Loop from 0 to `row` to iterate through each row.
            - Inner Loop: Loop from 0 to `row` to iterate through each column.
                - If `alpha` is less than or equal to 'X':
                    - Print `alpha` and increment `alpha`.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 3**: Left half pyramid of numbers
        - **Print Title**: "Left half pyramid of numbers"
        - **Nested Loops**:
            - Outer Loop: Loop from 1 to `row` to iterate through each row.
            - Inner Loop: Loop from 1 to the current row number to print the numbers in pyramid shape.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 4**: Right half pyramid of numbers
        - **Print Title**: "Right half pyramid of numbers"
        - **Nested Loops**:
            - Outer Loop: Loop from 1 to `row` to iterate through each row.
            - Inner Loop (for spaces): Loop from `row` minus current row number to 0 to print spaces.
            - Inner Loop (for numbers): Loop from 1 to the current row number to print the numbers in pyramid shape.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 5**: Half pyramid of uppercase letters
        - **Print Title**: "Half pyramid of uppercase letters"
        - **Nested Loops**:
            - Outer Loop: Loop from 0 to `row` to iterate through each row.
            - Inner Loop: Loop from 'A' to 'A' plus current row number to print letters in pyramid shape.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 6**: Grid of lowercase letters a to e
        - **Print Title**: "Grid of lowercase letters a to e"
        - **Nested Loops**:
            - Outer Loop: Loop from 0 to `row` to iterate through each row.
            - Inner Loop: Loop from 'a' to 'e' to print the grid of lowercase letters.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 7**: Hollow rectangle
        - **Print Title**: "Hollow rectangle"
        - **Nested Loops**:
            - Outer Loop: Loop from 0 to `row` to iterate through each row.
            - Inner Loop: Loop from 0 to `row` to print columns.
                - If at border (first or last row or column), print '*'.
                - Else, print space.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 8**: Inverted half pyramid
        - **Print Title**: "Inverted half pyramid"
        - **Nested Loops**:
            - Outer Loop: Loop from `row` down to 1 to iterate through each row.
            - Inner Loop: Loop from 1 to current row number to print '*'.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 9**: Hollow Inverted half pyramid
        - **Print Title**: "Hollow Inverted half pyramid"
        - **Nested Loops**:
            - Outer Loop: Loop from `row` down to 1 to iterate through each row.
            - Inner Loop: Loop from 1 to current row number to print columns.
                - If at border (first or last column or last row), print '*'.
                - Else, print space.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 10**: Full pyramid
        - **Print Title**: "Full pyramid"
        - **Nested Loops**:
            - Outer Loop: Loop from 1 to `row` to iterate through each row.
            - Inner Loop (for spaces): Loop from 1 to `row` minus current row number to print spaces.
            - Inner Loop (for '*'): Loop from 1 to current row number to print '*'.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 11**: Inverted full pyramid
        - **Print Title**: "Inverted full pyramid"
        - **Nested Loops**:
            - Outer Loop: Loop from `row` down to 1 to iterate through each row.
            - Inner Loop (for spaces): Loop from 0 to `row` minus current row number to print spaces.
            - Inner Loop (for '*'): Loop from 1 to current row number to print '*'.
            - **Print Newline**: Print a newline after each row to format the output correctly.

    - **Case 12**: Hollow full pyramid
        - **Print Title**: "Hollow full pyramid"
        - **Nested Loops**:
            - Outer Loop: Loop from 1 to `row` to iterate through each row.
            - Inner Loop (for spaces): Loop from 1 to `row` minus current row number to print spaces.
            - Inner Loop (for '*'): Loop from 1 to current row number to print columns.
                - If at border (first or last column or last row), print '*'.
                - Else, print space.
            - **Print Newline**: Print a newline after each row to format the output correctly.

7. **End Switch**: Conclude the switch statement that processes the user's pattern choice.

8. **Prompt User**: "Do you want to see other patterns?(y/n): "
    - Asks the user if they want to explore more patterns.
    - **Read `Choice`**: Reads and stores the user's decision in `Choice`.

9. **Check User's Decision**:
    - If `Choice` is 'y' or 'Y':
        - Go to Step 4 (Menu) to display the options again.

10. **End Loop**: End the do-while loop if the user decides not to continue.

11. **Print Closing Message**:
    - "Thank you for exploring the patterns. Have a great day!" - Thank the user for participating and conclude the program.

12. **End**: Terminate the program