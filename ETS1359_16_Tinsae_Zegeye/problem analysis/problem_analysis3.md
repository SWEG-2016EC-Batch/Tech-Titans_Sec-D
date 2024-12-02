# power calculator
## problem analysis
###  inputs:
        1.nunmber(base).
        2.exponent.

### output:
        1.power.

###  oprations:
        1.declare a variable to store basa , exponent and the power.
        2.read the inputs.
        3.calculate the power as  power = base^exponent. 
        4.print the power.
        
## algorithm design
###  pesudocode
        1.start the program.
        2.read the base and the exponent as x and y respectively.
        3.calculate the power as  power = x^y.
        4.print the power.
        5.end the program.    
        
### flowchart


```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read x  and y/]
    InputData --> Calculate[ power = x^y ]
    Calculate --> OutputData[/Print power/]
    OutputData --> End([End])