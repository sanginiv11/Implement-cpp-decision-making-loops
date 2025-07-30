# Implement-cpp-decision-making-loops
AIM: To study and implement C++ decision making statements Loops

THEORY:

1. Use a for loop to print even values between 0 and 10
- This program uses a for loop to iterate through a sequence of numbers from 0 to 10.
- The condition checks if each number is divisible by 2 (i.e., i % 2 == 0) to determine if it's even.
- Only the even numbers are printed during each valid iteration.
- This demonstrates how loop control and conditional logic can be used together to filter specific values.

2. Use a for loop to print “SIT” 5 times
- This program demonstrates the use of a for loop for fixed repetition.
- The loop runs exactly 5 times, printing the string “SIT” during each iteration.
- This is an example of repeating a constant output using loops.
- It helps in understanding loop structure and how the loop counter controls repetition.

3. Program using For-Continue loop
- The program demonstrates the use of the continue statement inside a for loop.
- When a certain condition is met, continue skips the current iteration and jumps to the next.
- This is useful when you want to ignore specific values or cases while still continuing the loop.
- It helps in controlling flow inside loops more precisely without breaking them completely.

4-8. Using for loops print following patterns

4. Pattern 1 (Left-aligned triangle using *)
- This program prints a left-aligned triangle using nested for loops.
- The outer loop controls the number of rows, while the inner loop controls the number of * to print per row.
- Each row prints a number of asterisks equal to the row number.
- It demonstrates basic nested loop structure for pattern generation.

5. Pattern 2 (Right-aligned triangle using *)
- This pattern uses spaces and asterisks together to form a right-aligned triangle.
- The outer loop runs through each row, and two inner loops handle spacing and asterisk printing.
- This helps understand how alignment and formatting work in loops.
- It emphasizes the importance of loop nesting and condition planning.

6. Pattern 3 (Centre aligned triangle using *)
- This is a centered pyramid pattern, created using nested for loops.
- The first inner loop prints spaces to center the stars, and the second inner loop prints increasing numbers of *.
- The number of stars in each row follows the rule (2*i - 1) where i is the current row.
- This pattern teaches how to balance space and characters for symmetry.

7. Pattern 4 (Left-aligned triangle using numbers)
- This program prints incremental numbers in a triangle format.
- A counter is used to print increasing integers row-wise using nested loops.
- Each row has one more number than the previous, forming a triangle shape.
- It is useful for understanding variable manipulation and number patterns in loops.

8. Pattern 5 (Left-aligned inverse triangle using *)
- This program prints a left-aligned inverse triangle pattern using nested for loops.
- The outer loop controls the number of rows, starting from the highest and decreasing with each iteration.
- The inner loop prints a decreasing number of asterisks (*) in each row.
- This helps understand how loop variables can be used in reverse order to create descending patterns and how nested loops interact to build shapes line by line.

 9. Print numbers from 1 to 20
- The program uses a simple for loop from 1 to 20.
- It demonstrates how to iterate through a linear numeric range.
- Each value of the loop counter is printed during every iteration.
- This is a fundamental exercise in understanding loop iteration over a number range.

10. Authenticate the password
- This program asks the user to input a password and checks if it matches a predefined value.
- A conditional statement compares the entered value with the correct one.
- If the password matches, access is granted; otherwise, it may prompt again or deny access.
- This program introduces user input, condition checking, and simple authentication logic.

ALGORITHM:

(01) PRINT EVEN NUMBERS FROM 1 TO 10
1. Start the program.
2. Use a loop variable i starting from 1 up to 10.
3. For each value of i from 1 to 10, do the following:
4. Check if i is divisible by 2 (i.e., i % 2 == 0).
5. If true, print the value of i.
6. Repeat step 3 until i exceeds 10.
7. End the program

(02) PRINT SIT 5 TIMES
1. Start the program.
2. Use a loop variable i starting from 0 up to 4.
3. For each value of i, do the following:
4. Print the value of i+1 followed by a dot and the word "SIT" on a new line.
5. Repeat step 3 until the loop ends (i reaches 4).
6. End the program

(03) PROGRAM USING FOR-CONTINUE LOOP 
1. Start the program.
2. Use a loop variable i starting from 1 up to 9.
3. For each value of i, do the following:
4. Check if i is divisible by 2 (i.e., i % 2 == 0).
5. If true, use continue to skip the rest of the loop and move to the next iteration.
6. If false, print the value of i followed by a space.
7. Repeat step 3 until i reaches 9.
8. End the program

(04) LEFT ALIGNED INVERSE STAR PATTERN
1. Start the program.
2. Use an outer loop variable i starting from 6 down to 1 (decrementing by 1 each time).
3. For each value of i, do the following:
4. Use an inner loop variable j starting from 1 up to i.
5. For each value of j, print a star (* ).
6. After the inner loop ends, print a newline to move to the next row.
7. Repeat steps 3 and 4 until the outer loop ends (i reaches 1).
8. End the program.

(05) RIGHT ALIGNED STAR TRIANGLE
1. Start the program.
2. Use an outer loop variable i from 1 to 6 (for each row).
3. For each row:
4. Use an inner loop variable j from 1 to (6 - i):
5. Print two spaces "  " to create the right alignment.
6. Use another inner loop variable k from 1 to i:
7. Print a star followed by a space ("* ").
8. After printing spaces and stars for the row, print a newline to move to the next row.
9. Repeat step 3 until all 6 rows are printed.
10. End the program.

(06) CENTRE ALIGNED TRIANGLE
1. Start the program.
2. Use an outer loop variable i starting from 6 down to 1 (for each row).
3. For each row:
4. Use an inner loop variable j from 0 to i:
5. Print a single space " " to create the left padding for center alignment.
6. Use another inner loop variable k from 6 down to i:
7. Print a space followed by a star (" *") to form the triangle.
8. After printing spaces and stars for the row, print a newline to move to the next row.
9. Repeat step 3 until all rows are printed.
10. End the program.

(07) LEFT ALIGNED NUMBER TRIANGLE
1. Start the program.
2. Initialize an integer variable a to 1.
3. Use an outer loop variable i from 0 to 3 (to control the number of rows).
4. For each row (i):
5. Use an inner loop variable j from 0 to i:
6. Print the current value of a followed by a space.
7. Increment a by 1.
8. After the inner loop ends, print a newline to move to the next row.
9. Repeat step 4 until all rows are printed.
10. End the program.

(08) LEFT ALIGNED STAR PATTERN
1. Start the program.
2. Use an outer loop variable i from 1 to 6 (for each row).
3. For each value of i:
4. Use an inner loop variable j from 1 to i:
5. Print a star (* ).
6. After the inner loop ends, print a newline to move to the next row.
7. Repeat steps 3 until all 6 rows are printed.
8. End the program.

(09) PRINT NUMBERS FROM 1 TO 20
1. Start the program.
2. Use a loop variable i starting from 1 up to 20.
3. For each value of i from 1 to 20, do the following:
4. Print the value of i followed by a space.
5. Repeat step 3 until i exceeds 20.
6. End the program.

(10) AUTHENTICATE THE PASSWORD
1. Start the program.
2. Declare two string variables: one for the correct password and one for user input.
3. Set the correct password (e.g., "Sangini").
4. Prompt the user to enter the password.
5. Read the user's input.
6. Compare the user's input with the correct password:
7. If the input matches the password, print "Access granted."
8. Otherwise, print "Access denied. Incorrect password."
9. End the program.

CONCLUSION: 
- This experiment helped us understand and implement loops and decision-making statements in C++. 
- We used for loops to print patterns and numbers, and if statements for conditions like password authentication.
- It improved our logic-building skills and gave practical experience with control flow in programming.
