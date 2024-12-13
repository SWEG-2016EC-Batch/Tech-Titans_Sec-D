# Sum of First and Last Digits
## Problem analysis
### Input 
    1.Number
### Output
    1.First and last digits
    2.Sum of first and last digits
### Opreations
    1.Declare a variable to store the input, first and last digits
    2.Read input
    3.Check the number. if the number is betweeb 0 and 9 then,
        first digit = number and no last digit
    4.if number is greater than or equals to 10 then,
        last digit = number %10
        fist digit = number
    5.if first digit is greater than or equals to 10 then,
        first first = first digit / 10 and repeat the division until the fist digit is less than 10
    6.Calculate the sum as sum = first digit + last digit
    7.Print the output
## Algorithm design
### Pseudocode
    1.Start
    2.Read number
    3.Check number
        3.1 if the number is between 0 and 9 then
            first digit = number
            no last digit
            goto step 6
        3.2 else  
            last digit = number %10
            fist digit = number
    4.Calculate first digit as first digit= first digit / 10
    5.Check the first digit 
        5.1 if first digit is greater than or equal to 10, goto step 4
        5.2 else go to step 6
    6.Calculate sum as sum = first digit + last digit
    7.Print first digit, last digit and sum
    8.End
### Flowchart
**Abreviations** \
**+LD-** last digit \
**+FD-** first digit \
**+num-** number

```mermaid
flowchart TD
    A([Start]) --> B[/Read num/]
    B --> C{Is num>=0 or num<= 9?}
    C -->|Yes| D[FD = num, no LD]
    C -->|No| E[LD = num % 10]
    E --> F[FD = num]
    F --> G[FD = FD / 10]
    D --> I
    G --> H{Is FD >= 10?}
    H -->|Yes| G
    H -->|No| I[Calculate sum =FD + LD]
    I --> J[/Print FD,LD and sum/]
    J --> K([End])
