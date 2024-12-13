# Revese of a number 
## Problem analysis
### Input 
    1.Number
### Output
    1.Reverse of a number
### Opreations
    1.Declare a variable to store the input, reminder and initialize  reverse to 0(reverse = 0)
    2.Read input
    3.Check the number
        if the number is greater than 0 then, divide the number by 10 and store the reminder on a reminder variable
        Calculate the reverse as reverse = reverse * 10 + reminder
        update the number as number = number/10
    4.Repeat this process until number is equal to 0
    5 print the output
## Algorithm design  
### pseudocode
    1.Start 
    2.initialize reverse to 0
    3.Read number
    4.if number is greater than 0 then,  
        4.1 Calculate reminder = number % 10
        4.2 Calculate reverse as reverse = reverse * 10 + reminder
        4.3 Update number as number = number/10
    5.Check number. 
        5.1 if number is greater than 0 then, goto step 4.1
        5.2 else goto step 6
    6.Print reverse  
    7.End
###  Flowcahrt
**Abbreviations** \
**+R-** Reminder \
**+r-** reverse \
**+num-** number

```mermaid
flowchart TD
    A([Start]) --> B[Initialize r = 0 ]
    B --> C[/Read num/]
    C --> D{Is num > 0?}
    D -->|Yes| E[R = num % 10] 
    E --> F[r= r * 10 + R]
    F --> G[num= num / 10]
    G --> D
    D -->|No| H[/Print r/]
    H--> I([End])



