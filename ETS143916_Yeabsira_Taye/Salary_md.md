# Salary Calculator

   ## Problem analysis
    
   **Inputs:** 
1. Name
2. Bonus rate perhour
3. Base salary
4. Weekly working hour.

**Outputs:**
1. Net salary
2. Bonus payment 
3. Gross salaray.

 **Operations:**
1. Declare variables to store name, weekly working hour, pension deduction, tax deduction, bonus payment, 
gross salary, net salary, bonus rate perhour, base salary and 
initialize pension = 0.05 and tax = 0.15
2. Read the inputs
3. Calculate 
\
            **bonus_payment = weekly working hour * bonus_rate perhour**
            \
            **gross_salary = base salary + bonus payment**
            \
            **pension_deduction = gross salary * pension**
            \
            **tax_deduction = gross salary * tax**
            \
            **net_salary = gross salary -(pension deduction + tax deduction)**
4. Print net salary, bonus payment and gross salary. 

 ---  
   ## Algorithm design
   **Pseudocode**
1. Start the program
2. Read  name, base salary,weekly working hour and bonus rate per hour
3. Calculate 
\
            **bonus payment = weekly working hour * bonus rate perhour**
            \
            **gross_salary = base salary + bonus payment**
            \
            **pension_deduction = gross salary * pension**
            \
            **tax_deduction = gross salary * tax**
            \
            **net_salary = gross salary -(pension deduction + tax deduction)**
4. Print net salary, bonus payment and gross salary 
5. End the program.


# Salary Calculation Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/input name, base salary, weekly working hours and bonus rate per hour/]
    InputData --> CalculateBonus[bonus payment = weekly working hour * bonus rate per hour]
    CalculateBonus --> CalculateGross[gross salary = base salary + bonus payment]
    CalculateGross --> CalculatePension[pension deduction = gross salary * pension]
    CalculatePension --> CalculateTax[tax deduction = gross salary * tax]
    CalculateTax --> CalculateNet[net salary = gross salary - pension deduction - tax deduction]
    CalculateNet --> OutputData[/Print net salary, bonus payment and gross salary/]
    OutputData --> End([End])
