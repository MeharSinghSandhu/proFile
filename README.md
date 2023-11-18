README for Employee Management System
Project Overview
This Employee Management System is a comprehensive software designed to handle various aspects of employee record management. It's implemented in C and utilizes a linked list data structure to manage employee records. The system offers functionalities such as adding new employees, searching for specific employees, counting total employees, sorting employees, and removing employees from the records.

Key Features
Employee Data Handling: Capable of loading, storing, and managing a list of employees, each with attributes like first name, last name, employee ID, and dependents.
Add New Employees: Add new employee records to the system.
Print Employee Data: Print details of all employees or a specific employee.
Search Employees: Search for an employee by their full name or ID.
Count Employees: Count the total number of employees in the system.
Sort Employees: Sort employees based on their employee ID.
Remove Employees: Capability to remove a specific employee or all employees from the records.
Files in the Project
mainA3.c: Main program file with a menu-driven interface for user interaction.
countEmployees.c: Function to count the total number of employees.
fireAll.c: Function to remove all employees from the records.
fireOne.c: Function to remove a specific employee.
helperA3.c: Helper functions for various tasks like creating employee data from a file.
lookOnFullName.c: Function to search an employee by their full name.
lookOnId.c: Function to search an employee by their ID.
printAll.c: Function to print details of all employees.
printOne.c: Function to print details of a specific employee.
recruitEmployee.c: Function to add a new employee to the system.
sortEmployeesId.c: Function to sort employees based on their ID.
How to Use
Compilation: Compile the program using a C compiler (like gcc).
Execution: Run the compiled program. The system will load employee data from a predefined file (if available) and present a menu for various operations.
Menu Options: Choose the appropriate option from the menu to add, search, sort, or remove employees, or to view employee data.
Dependencies
C Standard Library
Any standard C compiler (e.g., GCC)
Additional Notes
Ensure that the employee data file is properly formatted and available in the correct directory if the program is configured to read initial data from a file.
The system is designed for educational and demonstration purposes and may require modifications for use in a production environment.
