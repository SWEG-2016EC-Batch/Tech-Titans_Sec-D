# BMI calculator
## problem analysis
    
### inputs:
    
        1.number of a person
        2.weight and
        3.height.
### outputs:
        1.BMI of a person.
### oprations:
        1.declare a variable to store a number of person,weight ,height,BMI and initialize the counter to 1 (i=1)
        2.read inputs.
        3.calculate the BMI as BMI= weight/(height*height).
        4.check the range of the BMI to classify it as normal,overwweighted or underweighted.
        5.check whether the counter(i) is less than or equals to number of person.

## algorithm design
### pseudocode
         1.start the program.
         2.read the number of person as num.
         3.declare and initalize the counter to 1(i=1).
         4.read the the weight and height.
         5.calculate the BMI as BMI= weight/(height*height)
         6.check the BMI,
            6.1 if the BMI is b/n 18.5 and 24.9(BMI>=18.5 and BMI<=24.9)
                print BMI and "normal".
                go to step 7.
            6.2 if the BMI is greater than 25(BMI>25)
                print BMI and "overweight".
                go to step 7.
            6.3 else 
                print BMI and "underweight".
                go to step 7.
         7.increment the counter (i++)       
         8.check wether the counter is less than or equals to num     
            8.1 if i<=num,
                go to step 4.
        9.end the program.
## flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read the number of persons as num/]
    InputData --> InitializeCounter[Declare and initialize counter i = 1 ]
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

        



        
