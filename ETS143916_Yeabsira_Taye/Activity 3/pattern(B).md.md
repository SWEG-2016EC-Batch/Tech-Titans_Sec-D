### Simplified Pseudocode for Pattern Display Program

1. **Start**

2. **Declare Variables:**
   - `patternchoice (integer)`: Stores user's pattern choice.
   - `row (integer)`: Stores the number of rows for the pattern.
   - `Choice (character)`: Determines if the user continues or exits the program.

3. **Print Title:**
   - Display "---patterns show---" as an introductory title.

4. **Loop (Do While `Choice` is 'y' or 'Y'):**
   - **Print Menu:**
     - Display pattern options:
       1. Grid of numbers
       2. Grid of alphabets (A-X)
       3. Left half pyramid (numbers)
       4. Right half pyramid (numbers)
       5. Half pyramid (uppercase letters)
       6. Grid of lowercase letters (a-e)
       7. Hollow rectangle
       8. Inverted half pyramid
       9. Hollow inverted half pyramid
       10. Full pyramid
       11. Inverted full pyramid
       12. Hollow full pyramid
   - **Prompt and Read Input:**
     - Ask: "Enter your choice: "
     - Read `patternchoice`.

5. **Validate `patternchoice`:**
   - If invalid (`patternchoice` not 1-12):
     - Print: "Invalid Input, Please enter a correct choice."
     - Return to menu.
   - Else:
     - Ask: "Enter number of rows: "
     - Read `row`.

6. **Switch Case on `patternchoice`:**
   - Execute the corresponding code block for the chosen pattern:
     - **Case 1 to 12:** Use nested loops to generate and print the pattern as per the description.

7. **Prompt User for Continuation:**
   - Ask: "Do you want to see other patterns? (y/n): "
   - Read `Choice`.

8. **End Loop:** Exit if `Choice` is not 'y' or 'Y'.

9. **End**