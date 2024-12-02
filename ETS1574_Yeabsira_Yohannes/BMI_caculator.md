## Problem analysis
Calculate the Body Mass Index (BMI) for multiple person and determine their wether the person in in normal weight, under weight,over weight.
  1. **Inputs**:
        _The number of people their bmi  to be calculated ('num').
        -For each person:
            -Weight in kilograms ('weight').
            -Height in meters ('height').

  2. **Processing**:
        -Calculate BMI : 'BMI = weight / (height * height)'
        -Compare the calculated BMI to determine the weight category:
            -'BMI < 18.5': Underweight
            -'18.5 ≤ BMI ≤ 24.9': Normal weight
            -'25 ≤ BMI < 29.9': Overweight
            -'BMI ≥ 30': Obese

   3.**Outputs**:
        -Output the BMI for each individual.
        -Provide feedback on their weight category.

## Algorithm design 

         1.start
         2.read the number of people as num.
         3.declare the counter to 1(i=1).
         4.read their weight in kilograms and height in meters.
         5.calculate the BMI: BMI= weight/(height*height).
         6.check if the BMI,
            6.1 If BMI < 18.5, display "You are underweight!"
            6.2 If 18.5 ≤ BMI ≤ 24.9, display "You are in normal weight!"
            6.3 If 25 ≤ BMI < 29.9, display "You are overweight!"
            6.4 If BMI ≥ 30, display "You are obese!"  
         7.end the program. 
        
              
## Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read the number of persons as num/]
    InputData --> InitializeCounter[ Declare and intialize counter i = 1 ]
    InitializeCounter --> ReadData[/Read weight and height/]
    ReadData --> CalculateBMI[Calculate BMI = weight / height * height ]
    CalculateBMI --> CheckBMI{Is BMI between 18.5 and 24.9?}
    CheckBMI -->|Yes| NormalBMI[/Print BMI and "Normal"/]
    CheckBMI -->|No| CheckOverweight{Is BMI greater than 25?}
    CheckOverweight -->|Yes| OverweightBMI[/Print BMI and "Overweight"/]
    CheckOverweight -->|No| UnderweightBMI[/Print BMI and "Underweight"/]
    NormalBMI --> IncrementCounter[Increment counter i++ ]
    OverweightBMI --> IncrementCounter
    UnderweightBMI --> IncrementCounter
    IncrementCounter --> CheckCounter{Is i <= num?}
    CheckCounter -->|Yes| ReadData
    CheckCounter -->|No| End([End])











