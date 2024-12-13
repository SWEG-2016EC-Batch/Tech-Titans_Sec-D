# Checking if the given number is strong
## Problem analysis
### Input
    1.Number
### Output
    1.Srong or not 
### Opreations
    1.Declare a variable to store input, digits, the original number(temp) and initialize product to 1(product = 1 ) and sum to 0 (sum = 0)
    2.Read input and store it in temp
    3.Calculate the digit as digit = number % 10
    4.Calculate the product as product = product * digit, decrement the digit by one and repeat the process until the digit gets 0 
    5.Calculate the sum as sum = sum + product and update the number as number = number / 10
    6.Repeat the process until number gets 0 
    7.Print output
## Algorithm design
### Pseudocode
    1.Start
    2.Initialize product to 1(product = 1 ) and sum to 0 (sum = 0)
    3.Read number 
    4.Store number on temp (temp = number)
    5.if number = 0 then, goto step 14.2
    6.if number is greater than 0 then,
    7.Calculate digit as digit = number % 10
    8.Calculate product as product = product * digit
    9.Decrement digit by one (digit--)
    10.Check if the digit is greater than zero 
        10.1 if digit > 0 then, goto 8
        10.2 else goto step 11
    11.Calculate sum as sum = sum + product
    12.Update number as number = number/10
    13.Check if the number is greater than zero
        13.1 if number > 0 then, goto step 7 
        13.2 else goto step 14
    14.Check wether the sum is equals to the temp
        14.1 if temp = sum then, print strong number
        14.2 else print not strong number
    15.End

### Flowchart
**Abreviations** \
**+num-** number \
**+pro-** product \
**+temp-** variable to store original number \
**+D-** digit

```mermaid
flowchart TD
    A([Start]) --> B[pro = 1, sum = 0]
    B --> C[/Read num/]
    C --> D{Is num = 0?}
    D -->|Yes| O
    D -->|No| E[num = temp]
    E --> F[D = num % 10]
    F --> G[ pro = pro * D]
    G --> H[D--]
    H --> I{Is D > 0?}
    I -->|Yes| G
    I -->|No| J[sum = sum + product]
    J --> K[num = num / 10]
    K --> L{Is number > 0?}
    L -->|Yes| F
    L -->|No| M{Is sum = temp?}
    M -->|Yes| N[/print "strong num"/]
    M -->|No| O[/Print "Not strong num"/]
    N --> P([End])
    O --> P
