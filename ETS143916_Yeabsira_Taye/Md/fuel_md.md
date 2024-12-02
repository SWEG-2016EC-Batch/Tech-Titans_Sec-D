# Fuel Mileage Calculator
## problem analysis 

  **Inputs:**
1. Fuel capacity in gallon.
2. Miles per gallon.
 
**Output:**
1. Total miles an automobile can be driven without refueling.

**Operations:**
1. Declare variables for fuel capacity,milesper gallon and total miles before refueling.
2. Read inputs.
3. Calculate the total miles before refueling as total miles = fuelcapacity * miles pergallon.
4. Print the total miles.
 ---  
   ## Algorithm design
   **Pseudocode**
1. Start
2. Input fuelCapacity  
3. Read Input milesPerGallon 
4. IF fuelCapacity <= 0 OR milesPerGallon <= 0 then output "Error: Fuel capacity and miles per gallon must be positive values."
6. Else  totalMiles = fuelCapacity * milesPerGallon
7. Output "Total miles: ", totalMiles
8. End

# Fuel Mileage Calculation Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read fuel capacity and miles per gallon/] 
    InputData --> Calculate[Calculate total miles = fuel capacity * miles per gallon]
    Calculate --> OutputData[/Print total miles/]
    OutputData --> End([End])
