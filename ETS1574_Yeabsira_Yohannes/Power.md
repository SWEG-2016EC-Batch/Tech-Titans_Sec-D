### problem analysis
   # Input :
        1.Base number: can be positive, negative, or zero.
        2.power number or exponent: A non-negative integer.

   # Output:
        1.The value of x raised to the power y.

   # Oprations:
        1.declare a variable to store base , exponent and the power.
        2.read the inputs.
        3.calculate the power as **power = base^exponent.**
        4.print the power.
        
### Algorithm design

        1.start the program.
        2.read the base and the exponent as x and y respectively.
        3.calculate the power as** power = x^y.**
        4.print the power.
        5.end the program. 

### Power Calculation Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read x  and y/]
    InputData --> Calculate[ power = x^y ]
    Calculate --> OutputData[/Print power/]
    OutputData --> End([End])
