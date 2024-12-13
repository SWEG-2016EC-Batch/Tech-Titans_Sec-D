## Playing with numbers
---
This file provides the pseudocode for the program of number gaming that allows users to perform various mathematical operations on an input number.

---
### Pseudocode
--- 
1. **Start**
2. **Declare Variables**:
   - `num` (integer): Stores the user input number.
   - `choice` (integer): Stores the user's choice of operation.
   - `retry` (character): Determines whether the user wants to continue.

3. **Print Title**:
   - Display "---Welcome to Gaming with Numbers---".

4. **Loop (Do While `retry` is 'y' or 'Y')**:
   - **Prompt User**: "Enter an integer to play with: "
   - **Read `num`**: Store user input.
   - **Validate Input**:
     - If the input is invalid:
       - Print "Invalid Input, please insert only a positive integer."
     - Else:
       - **Print Menu**:
         - Display numbered options for operations (1-9).
       - **Prompt User**: "Enter your choice: "
       - **Read `choice`**.
       - **Validate Input**:
         - If `choice` is not in range 1-9:
           - Print "Invalid choice. Please select a valid option."
         - Else:
           - **Switch Case on `choice`**:

             - **Case 1**: Reverse the number.
               - Initialize `reverse` to 0.
               - Copy `num` to `original`.
               - While `original` is not 0:
                 - Extract the last digit: `digit = original % 10`.
                 - Append the digit to `reverse`: `reverse = reverse * 10 + digit`.
                 - Remove the last digit: `original = original / 10`.
               - Print "The reversed integer is: ", `reverse`.

             - **Case 2**: Count the number of digits.
               - Initialize `count` to 0.
               - Copy `num` to `original`.
               - If `original` is 0:
                 - Set `count` to 1.
               - Else:
                 - While `original` is not 0:
                   - Remove the last digit: `original = original / 10`.
                   - Increment `count`.
               - Print "Number of digits: ", `count`.

             - **Case 3**: Find the product of even digits.
               - Initialize `product` to 1.
               - Copy `num` to `original`.
               - While `original` is not 0:
                 - Extract the last digit: `digit = original % 10`.
                 - If `digit` is even:
                   - Multiply `product` by `digit`.
                 - Remove the last digit: `original = original / 10`.
               - Print "Product of even digits: ", `product`.

             - **Case 4**: Print the first and last digit and their sum.
               - Extract the last digit: `lastdigit = num % 10`.
               - Copy `num` to `firstdigit`.
               - While `firstdigit` is greater than or equal to 10:
                 - Remove the last digit: `firstdigit = firstdigit / 10`.
               - Print "First digit: ", `firstdigit`.
               - Print "Last digit: ", `lastdigit`.
               - Print "Sum: ", `firstdigit + lastdigit`.

             - **Case 5**: Swap the first and last digit.
               - Find the digit count and extract the first and last digits.
               - Construct the swapped number using place value manipulation.
               - Print "Swapped number: ", result.

             - **Case 6**: Check if the number is a palindrome.
               - Reverse the number using the same logic as Case 1.
               - Compare the reversed number with `num`.
               - Print "Is palindrome" or "Is not palindrome".

             - **Case 7**: Find the frequency of each digit.
               - Initialize a frequency array.
               - Copy `num` to `original`.
               - Extract and count each digit.
               - Print "Digit: Frequency" for each non-zero count.

             - **Case 8**: Check if the number is a Strong number.
               - Sum the factorial of each digit.
               - Compare the sum with `num`.
               - Print the result.

             - **Case 9**: Check if the number is a Perfect number.
               - Sum all divisors of `num` (excluding itself).
               - Compare the sum with `num`.
               - Print the result.

       - End Switch.

   - **Prompt User**: "Do you want to continue? (y/n): ".
   - **Read `retry`**.
   - **If yes, go to Step 4**.

5. **End Loop**.
6. **Print Closing Message**:
   - "Thank you for playing 'Gaming with Numbers'. Have a great day!"
7. **End**.

