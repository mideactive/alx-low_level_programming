## <div align="center">if,else and while loop Project</div>
### OS: Linux ubuntu 20.4

#### 0. Positive anything is better than negative nothing
##### [0-positive_or_negative](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c):

###### This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number          stored in the variable n is positive or negative.

 [source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c) 

      . The variable n will store a different value every time you will run this program
      
      . You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
      
      . The output of the program should be:
      
          . The number, followed by

          . if the number is greater than 0: is positive

          . if the number is 0: is zero

          . if the number is less than 0: is negative

          . followed by a new line

##### Solution:
######    It a simple case of using the conditional statements if, else if and else

          The variable 'n' has been initlized rand() - RAND_MAX / 2 to generate random numbers
          
          If 'n' is greater(>) than 0, 'n' returns a positive integer value of variable 'n' with a string "is positive"
          
          Else if 'n' is equal(==) 0, 'n' zero with a the string "is zero"
          
          Else 'n' return a nagative integer, 'n' should print variable 'n' with the string "is nagative"
      
#### 1. The last digit

[1-last_digit.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c):

##### This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of          the number stored in the variable n.

   [Source Code](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
            
            . The variable n will store a different value every time you run this program
            
            . You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
            
            . The output of the program should be:
            
                   The string Last digit of, followed by
                   
                   n, followed by
                   
                   the string is, followed by
                   
                   if the last digit of n is greater than 5: the string and is greater than 5
                   
                   if the last digit of n is 0: the string and is 0
                   
                   if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
                   
                   followed by a new line
##### Solution:

###### Just like task 0, it's simple a case of if, else if and else

            . We can extract the last digit of variable 'n' with n % 10
            
            . If n % 10 > 5 , print the int value of 'n' and a string "is than greater 5"
            
            . If n % 10 == 0, print the int value of 'n' and a string "is 0"
            
            . Else , print the int value of 'n' and a string "is less than 6 and not 0"
            
