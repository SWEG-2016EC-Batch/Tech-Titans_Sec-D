## Salary Calculator Program

This document provides a problem analysis, pseudocode and flowchart for a program that calculates an employee’s salary, including bonus, gross salary, and net salary.

---

---

## Pseudocode


---

## Flowchart

```mermaid
graph TD
  start([Start]) --> inputdata[Input: basic salary, worked hours, and bonus rate]
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

