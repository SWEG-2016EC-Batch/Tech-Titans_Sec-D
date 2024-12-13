## Salary Calculator Program
---
## Problem Analysis
1. **Input:**
     a. Base salary 
     b. Weekly working hours 
     c. Bonus rate per hour of Employee
2. **Operation**
     
     **Calculate bonus payment using bonus = hours * bonusRate
     \
     Calculate gross salary using grossSalary = baseSalary + bonus
     \
     Calculate tax_deduction = grossSalary * tax
     Calculatepension_deduction = grossSalary * pension
     \
     Calculate netPay = grossSalary - tax_desuction  pension_desuction**

3. **Output:**
 Bonus payment, Gross salary, Net pay
---
### Pseudocode

1. **START**
2. **Inputs:**
2.1 READ basicSalary
2.2 READ workedHours
2.3 READ bonusRate

3.  IF workedHours > 40 THEN
    DISPLAY "Enter the over-time bonus rate per hour:"
     READ overtimeBonusRate
      CALCULATE overtimePay = (workedHours - 40) * overtimeBonusRate
     ELSE
     SET overtimePay = 0

4.  CALCULATE grossPay = basicSalary + (workedHours * bonusRate) + overtimePay

5.  pensionRate = 0.07
   CALCULATE pension = grossPay * pensionRate

6. print "Enter the tax rate (as a decimal):"
    READ taxRate

7. CALCULATE tax = grossPay * taxRate

8. CALCULATE netPay = grossPay - pension - tax

9. - print"Gross Pay: " + grossPay
   - print "Pension Deduction: " + pension
   - print "Tax Deduction: " + tax
   - print "Net Pay: " + netPay

10. **END**

---
---

## Flowchart

```mermaid
graph TD
  start([Start]) --> inputdata[/Input: basic salary, worked hours, and bonus rate/]
  inputdata --> checkworkhours{If worked hours > 40}
  checkworkhours -- No --> grosspay[Calculate gross pay: gross pay = bonusRate*/baseSalary + workedHours/]
  checkworkhours -- Yes --> overtime[Read overtime bonus rate per hour]
  overtime --> overtimepay[Calculate overtime pay: overtime pay = overtimeBonusRate*/workedHours - 40/]
  overtimepay --> grosspay
  grosspay --> pensiondeduction[Calculate pension deduction: grossSalary * 7%]
  pensiondeduction --> taxrate[/Read tax rate/]
  taxrate --> taxrdeduction[Calculate tax: grossSalary * taxRate]
  taxrdeduction --> netpay[Calculate net pay: grossSalary - pension - tax]
  netpay --> output[/Display gross pay, pension, tax, and net pay/]
  output --> End([End])