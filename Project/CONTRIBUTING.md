## Contributors

- **[Thomas Addisu_ETS 1350/16](https://github.com/janedoe)**  \
**Program Introduction** \
  -Displays a welcome message and program description. \
**Variable Declarations** \
-Defines variables for tracking runners, their miles, total miles, and unique IDs. \
**Main Menu** \
Provides 4 options: Instructor login, runner registration, search runner history, and exit. \
**Instructor Functionality** \
-Allows the instructor to add runners by entering a valid number (with error handling and retry options). \
    
- **[Tinsae Zegeye_ETS 1359/16](https://github.com/TinsaeZegeye)**  \
  **Input validation and runner details entry**
  - Ensures the instructor inputs a valid data for runner details while adding runners. i.e Valid data for runner's daily running practice and allows for multiple attempts.
  - Prompts the instructor to enter full name, unique code and daily running miles for each runner.
  - Calculate the total and average miles for each runner.
  - Display the runner details in a tabular format. 
    
- **[Yeabsira Yohannes_ETS 1574/16](https://github.com/yeabuti17)** \
**Add New Runner and Record Weekly Mileage.**
  
1. Input Runner Information:
The user enters their full name.
The user sets a unique code for identification.
2. Record Running Data:
The runner provides the number of miles they ran for each of the 7 days in a week.
The program validates the input to ensure non-negative values are entered.
3. Calculate Weekly Performance:
It calculates the total miles run by the runner across the week.
It computes the average miles run per day.
4. Store Runner Data:
The program stores the runner's name, code, daily mileage, total miles, and average miles in the respective arrays.
5. Provide Feedback:
Based on the runner's average daily mileage, the program provides performance feedback:
Excellent if the average is 10+ miles/day.
Good Progress if the average is between 5 and 10 miles/day.
Needs Improvement if the average is below 5 miles/day.

- **[Yeabsira Taye_ETS 1439/16](https://github.com/Yeab18)** \
**Checks for Available Runners, Input, Search Logic and Not Found Handling** 
  - The first part ensures that there are runners available (numRunners > 0). If no runners have been added yet, it prompts the user to add runners first.  
  - The user is prompted to input the runner's name and code for which they want to view the history. 
  - The program then iterates through a list of runners (stored in arrays runners and code) to find a matching runner. If a match is found, it displays the runner's history, including: \
        - Miles run on each day (stored in the miles array), \
        - Total miles run (from totalmiles), \
        - Average miles run (from averagemiles). 
  - If no matching runner is found, the program displays an error message indicating that the runner's name or code is incorrect.

- **[Yeisrael Dawit_ETS 1446/16](https://github.com/Yetdev27)** \
  **Output data presentation, user interaction flow, and SDLC model development.**

    - Tabular Data Presentation: Implemented a clear tabular format for runners' details, using `setw()` from `<iomanip>` for proper alignment and clarity.
    - System SDLC Documentation: [Have a look here](https://docs.google.com/document/d/1MBrmF4kAjAzc5n13oeh3ODVByFOnk8wxdQ1kdBND9E0/edit?usp=sharing). Used the Iterative Software Development model for the purpose of error-catching and future enhancement.For best project management practices, created the [CONTRIBUTING.md](CONTRIBUTING.md) and [README.md](README.md).
--- 

### "Coming together is a beginning, staying together is progress, and working together is success." – Henry Ford

[![All Contributors](https://img.shields.io/badge/all_contributors-5-orange.svg?style=flat-square)](#contributors)


