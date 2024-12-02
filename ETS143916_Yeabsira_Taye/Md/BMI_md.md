# BMI calculator
   ## problem analysis
    
   **Inputs:** 
    
   1. Number of a person
   2. Weight and
   3. Height.
   **Outputs:**
   1. BMI of a person.
   **Operations:**
   1. Declare a variable to store a number of person,weight ,height,BMI and initialize the counter to 1 (i=1)
   2. Read inputs.
   3. Calculate the BMI as BMI= weight/(height*height).
   4. Check the range of the BMI to classify it as normal,overwweighted or underweighted.
   5. Check whether the counter(i) is less than or equals to number of person.
   ---  
   ## Algorithm design
   **pseudocode**
1. Start
2. Read the number of persons as INPUT num 
3. For i From 1 TO num do 
4. Read  Input weight, height 
5. BMI = weight / (height * height)
6. IF BMI >= 18.5 AND BMI <= 24.9 output BMI, "normal"
7. Else if BMI > 25 output BMI, "overweight"
8. Else output BMI, "underweight"
9. End
# BMI Calculation and Evaluation Flowchart

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
