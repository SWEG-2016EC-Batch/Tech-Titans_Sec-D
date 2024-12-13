# Checking if the number is perfect 
## Problem analysis
### Input
    1.Number
### Output
    1.Perfect or not
### Opreations 
    1.Declare a variable to store input, original number(temp) and initialize counter to one (i=1) and sum to zero (sum = 0)
    2.Read input and assign the value to temp (temp = number)
    3.if number is divisible by i then, calculate sum as sum = sum + i and then increment the value i by one(i++)
    4.Repeat the above process up to half of the number (number/2)
    5.Check if the sum and the temp are equal. if they are equal print perfect number else not.

## Algorithm design
### Pseudocode
    1.Start
    2.Initialize counter to one (i = 1 ) and sum to zero (sum = 0)
    3.Read the number
    4.Store number on temp(temp = num)
    5.If number is divisible by i (number % i = 0) then, sum = sum + i
    6.Increment the counter (i++)
    7.Check the counter
        7.1 if i is lessthan or equals to half of the number(i <= number/2) then goto step 5
        7.2 else goto step 8
    8.Check if the sum is equals to temp 
        8.1 if temp = sum then, print Perfect number
        8.2 else not perfect number
    9.End

### Flowchart

**Abreviations** \
**+num-** number \
**+temp-** variable to store original value of number \
**+i-** counter

```mermaid

flowchart TD
    A([Start]) --> B[ i= 1,  sum = 0]
    B --> C[/Read num/]
    C --> D[temp = num]
    D --> E{Is num % i = 0?}
    E -->|Yes| F[sum = sum + i]
    F --> G[ i++ ]
    E -->|No| G
    G --> H{Is i <= num / 2?}
    H -->|Yes| E
    H -->|No| I{Is sum = temp?}
    I -->|Yes| J[/print " Perfect num"/]
    I -->|No| K[/print "Not Perfect num"/]
    J --> L([End])
    K --> L
