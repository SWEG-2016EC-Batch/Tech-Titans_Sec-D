 ## problem analysis

 ### Inputs:
    1.base_salary: The base salary in birr (a positive double).
    2.employee_name: The name of the employee (a string).
    3.weekly_working_hours: The number of hours worked weekly (a positive double).
    4.bouns_rate_per_hour: The bonus rate per hour in birr (a positive double).
    
 ### Outputs:
    1.employee's gross salary in birr.
    2.employee's net salary in birr.
    3.employee's bonus payment in birr.

 ### Oprations:
    1.declare variables to store name, weekly working hour, pension deduction, tax deduction, bonus payment, gross salary, net          salary, bonus rate perhour, base salary and inialize pension = 0.05 and tax = 0.15
    2.read the inputs
    3.calculate 
        **bonus_payment = weekly working hour * bonus_rate perhour**
        **gross_salary = base salary + bonus payment**
        **pension_deduction = gross salary * pension**
        **tax_deduction = gross salary * tax**
        **net_salary = gross salary -(pension deduction + tax deduction)**
    4.print net salary, bonus payment and gross salary. 

 ## algorithm design
   ###  pesudocode
    1.start the program
    2.read  name, base salary,weekly working hour and bonus rate per hour
    3.calculate 
         -**Bonus Payment**: `bonus_payment = weekly_working_hours × bonus_rate_per_hour`
         - **Gross Salary**: `gross_salary = base_salary + bonus_payment`
         - **Deductions**:
              - Pension Deduction: `pension_deduction = gross_salary × 0.05`
              - Tax Deduction: `tax_deduction = gross_salary × 0.15`
         - **Net Salary**: `net_salary = gross_salary − (pension_deduction + tax_deduction)`
    4.print net salary, bonus payment and gross salary 
    5.end the program.

  ## Flowchart

```mermaid
flowchart TD
    id1([Start]) --> id2["Input: Employee name"]
    id2 --> id3["Input: Base salary in birr"]
    id3 --> id4{"Base salary <= 0"}
    id4 --True--> id5["Output: Error - Base salary must be greater than zero"]
    id5 --> id6([End])
    id4 --False--> id7["Input: Weekly working hours"]
    id7 --> id8{"Weekly working hours <= 0"}
    id8 --True--> id9["Output: Error - Weekly working hours must be greater than zero"]
    id9 --> id6
    id8 --False--> id10["Input: Bonus rate per hour in birr"]
    id10 --> id11{"Bonus rate <= 0"}
    id11 --True--> id12["Output: Error - Bonus rate must be greater than zero"]
    id12 --> id6
    id11 --False--> id13["Calculate bonus payment = weekly working hours * bonus rate"]
    id13 --> id14["Calculate gross salary = base salary + bonus payment"]
    id14 --> id15["Calculate pension deduction = gross salary * 0.05"]
    id15 --> id16["Calculate tax deduction = gross salary * 0.15"]
    id16 --> id17["Calculate net salary = gross salary - (pension deduction + tax deduction)"]
    id17 --> id18["Output: Gross salary, net salary, and bonus payment"]
    id18 --> id19([End])


```
