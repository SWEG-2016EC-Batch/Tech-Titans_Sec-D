# Fitness Tracking System
## Problem Analysis 
 ### Inputs: 
    1.Menu Option: Allows the user to choose between four options:  
        -joining as an instructor  
        -joining as a runner 
        -searching a runner's history and  
        -exiting the program. 
    2.Number of Runners: The instructor will input how many new runners will be added. 
    3.Runner's Information: Includes the runner's name, unique code, and daily running mileage (7 days). 
    4.Search Criteria: If the user wants to search for a runner's performance, they will enter the runner's name and code.
    
 ### Outputs
    1.Run Information: Prints the weekly mileage of each runner.
    2.Performance Feedback: Provides feedback based on the average number of miles run by each runner.
    3.Runner's History: Allows the instructor or others to search for a specific runner's daily mileage.

### Operations
    1.Menu Options: The program displays a menu for the user to choose from.
    2.Runner Addition: The instructor can add a number of runners, set unique codes for them, and input their daily mileage.
    3.Performance Tracker: The program calculates the total and average miles for each runner and provides performance feedback.
    4.Search Functionality: A user can search for a specific runner's history by providing their name and unique code.
    5.Error Handling: The program includes validation checks for proper input (e.g., for the number of runners and mileage).

## Algorithm Design

### Pseudocode:

    1. Start program:
      - Display welcome message.

    2. Declare variables:
      - runners: An array of names for up to 15 runners.
      - miles: A 2D array for storing weekly mileage of runners.
      - total_miles: An array to store the total mileage of each runner.
      - average_miles: An array to store the average mileage of each runner.
      - code: An array to store unique codes for each runner.
      - number of runners: A variable initialized to 0 (initial count of runners).

    3. Do while user wants to continue:
      - Display menu:
        - Present the following options:
          1. Join as Instructor
          2. Join as Runner
          3. Search Runner History
          4. Exit

      - Take user input for choice:
      - Prompt the user for their choice and validate input.

    4. Handle user choices:
      - If choice = 1 (Join as Instructor):
      - Prompt the instructor to enter the number of runners.
      - For each runner, input the following:
        - Runner's name
        - Unique identification code
        - Daily mileage for 7 days
      - Calculate total and average miles.
      - Display a tabular summary of all runners, including their total and average mileage.
      - Provide performance feedback for each runner based on their average daily mileage.

    - If choice = 2 (Join as Runner):
      - Prompt the runner to enter their name and unique code.
      - Input the runner's daily mileage for a week.
      - Calculate their total and average mileage.
      - Display performance feedback based on their average daily mileage.

    - If choice = 3 (Search Runner History):
      - Prompt the user to enter the runner's name and unique code.
      - Search for the corresponding records in the system.
      - Display the runner's daily mileage, total mileage, and average mileage.

    - If choice = 4 (Exit):
      - Terminate the program gracefully by displaying a farewell message.

    5. End program:
---
### Flow Chart:






