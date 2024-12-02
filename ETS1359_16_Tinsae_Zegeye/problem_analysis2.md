# number of miles of an automobile
## problem analysis
### inputs:
        1.fuel capacity in gallon.
        2.miles pergallon.

###  output:
        1.total miles an automobile can be driven without refueling.

### oprations:
        1.declare variables for fuel capacity,milesper gallon and total miles before refueling.
        2.read inputs.
        3.calculate the total miles before refueling as  total miles = fuelcapacity * miles pergallon. 
        4.print the total miles.
        
## algorithm design    
### pseudocode
        1.start the program.
        2.read the fuel capacity and miles pergallon.
        3.calculate the total miles as  total miles = fuel capacity * miles pergallon .
        4.print the total miles.
        5.end the program.
## flowchart

 ```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read fuel capacity and miles per gallon/] 
    InputData --> Calculate[Calculate total miles = fuel capacity * miles per gallon]
    Calculate --> OutputData[/Print total miles/]
    OutputData --> End([End])
                      
 
    
 
     