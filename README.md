# largest_number_two_digits
Small C program that builds the largest possible two-digit number using two input digits (from 0 to 9).
# Max Number with Two Digits

This is a simple C program that takes two single-digit integers (from 0 to 9) as input and outputs the largest two-digit number that can be formed using those digits.

## 🧠 Logic

- The program asks the user to input **two numbers between 0 and 9**.
- It checks if the inputs are valid (i.e., both are between 0 and 9).
- Then, it forms the largest possible two-digit number using the digits:
  - If both digits are equal, it repeats the digit (e.g., 3 and 3 ➝ 33).
  - If the digits are different, it arranges them in descending order (e.g., 7 and 2 ➝ 72).

## 🔢 Example

```bash
Input:
Enter two numbers (from 0 to 9):
3 9

Output:
The numbers entered were: 3 and 9  
The largest number with those digits is: 93
