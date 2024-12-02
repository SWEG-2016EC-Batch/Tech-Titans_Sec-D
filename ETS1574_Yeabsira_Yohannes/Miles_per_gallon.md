### Problem analysis

   # Inputs :
    1.fuel capacity in gallon.
    2.miles pergallon.

   # output:
    1.total miles an automobile can be driven without refueling.

   # opration:
    1.declare variables for fuel capacity,milesper gallon and total miles before refueling.
    2.read inputs.
    3.calculate the total miles before refueling as **total miles = fuelcapacity * miles pergallon**.
    4.print the total miles.
### Algortihm design
    step 1.start
    step 2.Input the fuel capacity and miles pergallon.
    step 3.calculate the total miles as **total miles = fuel capacity * miles pergallon**.
    step 4.print the total miles.
    step 5.end 

### Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read fuel capacity and miles per gallon/] 
    InputData --> Calculate[Calculate total miles = fuel capacity * miles per gallon]
    Calculate --> OutputData[/Print total miles/]
    OutputData --> End([End])
