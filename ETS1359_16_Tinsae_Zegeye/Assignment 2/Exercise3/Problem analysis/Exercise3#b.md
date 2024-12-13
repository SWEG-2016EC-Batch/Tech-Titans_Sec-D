# Digit Counter
## Problem analysis
### Input 
    1.Number
### Output
    1.Number of  digits
### Opreations
    1.Declare a variable to store the input, reminder and initiallize the counter to 0(i=0)
    2.Read input
    3.Check the number
        if the number is greater than 0 then, divide the number by 10 and store the reminder on a reminder variable
        update the number as number = number/10
        increment the counter(i++)
    4.Repeat this program until number is equal to 0
    5 print the output
## Algorithm design
### Pseudocode 
    1.Start
    2.Initialize counter to 0
    3.Read number 
    4.if number is greater than 0 then,
        4.1 calculate reminder as reminder = number % 10
        4.2 update number as number = number / 10
        4.3 increment the counter(i++)
    5.Check the number. If number is  greater than 0 
        5.1 goto step 4.1
        5.2 else goto step 6
    6.Print the counter
    7.End
## Flowchart
**Abreviations** \
**+num-** number \
**+R-** reminder \
**+i-** counter

```mermaid
flowchart TD
    A([Start])--> B[Initialize i = 0]
    B --> C[/Read num/]
    C --> D{Is num > 0?}
    D -->|Yes| E[Calculate R= num % 10]
    E --> F[ num= num / 10]
    F --> G[Increment i++]
    G --> D
    D -->|No| H[\Print i\]
    H --> I([End])

    