## <hr> <div align="center">if,else and while loop Project</div>

### OS: Linux ubuntu 20.4

#### 0. Positive anything is better than negative nothing

##### [0-positive_or_negative](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c):

##### This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number          stored in the variable n is positive or negative.

 [source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c) 

      . The variable n will store a different value every time you will run this program
      
      . You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
      
      . The output of the program should be:
      
          . The number, followed by

          . if the number is greater than 0: is positive

          . if the number is 0: is zero

          . if the number is less than 0: is negative

          . followed by a new line

#### Solution:
#####    It a simple case of using the conditional statements if, else if and else

###          Included standard libraries;
          
####          <stdio.h>: is required for our printf function, that takes a int specifier inside a string, and our int variable as arguments
          
####          <stdlib.h>: is required for srand, rand and RAND_MAX
          
####          <time.h>: is required to use the time(0) function, to ensure that we have random intergers 

######             . MAIN: function takes an empty argument, and returns an int.

######             . INT n: Stores the value to be outputed.

######             . srand(time(0)): ensure that we get diferent values each time we run our programm.

######             . The rand() - RAND_MAX / 2: prints random integers, and stores it inside out n variable.

######             . IF: used to check id N is greater than 0, if true, it prints a positive value of n and a string

######             . ELSE If: for further conditions, it prints 0 if the value of n is equal to 0

######             . ELSE: signifies the end of our condition, and print the value of n if it is nagative 
          
######             . RETURN: return an int as required.


<hr/>

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

###          Included standard libraries;
          
####          <stdio.h>: is required for our printf function, that takes a int specifier inside a string, and an int variable as arguments
          
####          <stdlib.h>: is required for srand, rand and RAND_MAX
          
####          <time.h>: is required to use the time(0) function, to ensure that we have random intergers 

######            . MAIN: function returns an int, and takes no argument.

######            . INT n: take a int datatype, and stores the result of the output

######            . srand(time(0)): ensure variable n returns different int values each time it's called

######            . rand() - RAND_MAX / 2: creates random integers and stores it intside the n variable

######            . IF: i.e n % 10 > 5, extract the last value of int n, returns int n and the last value if it is greater than 5.

######            . ELSE IF: n % 10 == 0, extract the last value of int n, returns int n and the value 0 if it is equal to 0

######            . ELSE: signifies the end of an IF, returns int n, the last value of n, and the string and is less than 6 and not 0

######            . RETURN: returns an int as required.             

 <hr>
    
    
##### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

[2-print_alphabet.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)

##### Write a program that prints the alphabet in lowercase, followed by a new line.

                . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           
                . All your code should be in the main function
           
                . You can only use putchar twice in our code
           
##### Solution:

###### Task 2 require that we use a loop statement. in this case, i used a FOR loop, which keeps running as long as the condition is true.

#### <stdio.h>: is required for the putchar function. The putchar function takes a single character argument

######           . MAIN: function will return an integer, and doesn't take any argument.

######           . INT low: stores a char datatype.

######           . FOR: a loop statement is that is used to loop through askeys 'a' to 'x'

######           . PUTCHAR: the function prints the output of the 'low' variable, and also prints a newline

######           . RETURN: returns an int as required i.e 0
          
<hr>

#### 3. alphABET

[3-print_alphabets.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)

##### Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

               . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
               
               . All your code should be in the main function
               
               . You can only use putchar three times in your code
           
##### Solution:

###### Just like tast two, we will use a 'for' statement to loop through characters, but we have to do it twice this time around.

#### <stdio.h>: is required for the putchar function. The putchar function takes a single character argument

######         . MAIN: returns an int and takes no argument

######         . INT low: stores the lower and upper case values to be printed.

######         . FOR: is a loop statement used twice, to loop through 'a' to 'z' and 'A' to 'Z'. Each FOR loop is followed by a putchar(low) so that, so that the alphabets can be printed next to eachother.
######         . PUTCHAR: is a function used to print the output of variable 'low', and a newline.

######         . RETURN: returns 0 as required
          
<hr>
 
#### 4. When I was having that alphabet soup, I never thought that it would pay off

[4-print_alphabt.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)

###### Write a program that prints the alphabet in lowercase, followed by a new line.

            . Print all the letters except q and e
          
            . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
          
            . All your code should be in the main function
          
            . You can only use putchar twice in your code
          
##### Solution:

###### Similar to tast 4, we will use a 'for' loop to loop through our alphabets. But we are asked to exempt 'q' and 'e'

#### <stdio.h>: is required for the putchar function. The putchar function takes a single character argument

######       . MAIN: returns an int, and takes no argument.

######       . INT low: takes a char datatype, and is used to store the output of our alphabet

######       . FOR: loops through the askeys 'a' to 'z'

######       . IF ((x != 'q') & (x != 'e')): ensures that 'q' and 'x' are not part of the values variable 'low' will return

######       . PUTCHAR: functions prints the output of the 'low' variable, and also prints a newline 

######       . RETURN: returns int as required i.e 0 

<hr>
         
#### 5. Numbers

[5-print_numbers.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)

##### Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

          . All your code should be in the main function
          
##### Solution:

###### Just like the previous tasks, we will also use the 'for loop' statment. But we will looping int values from 0 to 9

#### <stdio.h>: is required for the printf function.

###### . MAIN: returns an int, and takes no arguments

###### . INT i: stores the value to be printed

###### . FOR: loops through 0 to 10, and return ten digits from 0 to 9

###### . PRINTF: prints the output of variable i, with an int specifier, and also prints a newline.

###### . RETURN: returns an int as specified
         
<hr>

#### 6. Numberz

[6-print_numberz.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)

##### Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

        . You are not allowed to use any variable of type char
        
        . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
        
        . You can only use putchar twice in your code
        
        . All your code should be in the main function
        
##### Solution:

###### We are asked to print integer value 0 to 9 using the putchar function, without using a char datatype. A putchar function is designed to accept   a single argument, which much be of a characters datatype.

#### <stdio.h>: is required for the putchar function. The putchar function takes a single character argument

###### . MAIN: returns an int, doesn't take any argument
 
###### . INT D: stores the value to be printed

###### . FOR: loops through the '0' to '9' digits, wraped in a single column so that it can be printed using the PUTCHAR function.

###### . PUTCHAR: prints the result of int d, and also a newline.

###### . RETURN: returns an int as required

<hr>

### 7. Smile in the mirror

[7-print_tebahpla.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)

#### Write a program that prints the lowercase alphabet in reverse, followed by a new line.

           . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           
           . All your code should be in the main function
           
           . You can only use putchar twice in your code

### Solution:

#### <stdio.h>: required to us the put char function

###### . MAIN: returns an int, and takes no argument

###### . CHAR d: strores the values to be printed

###### . FOR: loops through 'z' to 'a', because we are to print in reverse.

###### . PUTCHAR: outputs the value of the CHAR d in reverse, and also prints a newline.

###### . RETURN: returns an int as required

<hr>

### 8. Hexadecimal

[8-print_base16.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)

#### Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

         . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
         
         . All your code should be in the main function
         
         . You can only use putchar three times in your code
         
### Solution:

#### <stdio.h>: standard library required to use the PUTCHAR function

###### .MAIN: returns an int, and takes no argument

###### . INT d: stores values for int

###### . CHAR low: stores values for character

###### . FOR: used twice to loop through values for int variable d '0' to '9' and char variable low 'a' to 'f'.

###### . PUTCHAR: used to print the value of int d, char low, and a newline

###### . RETURN: return an int as required.

<hr>

#### 9. Patience, persistence and perspiration make an unbeatable combination for success

[9-print_comb.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)

#### Write a program that prints all possible combinations of single-digit numbers.

           . Numbers must be separated by ,, followed by a space
           
           . Numbers should be printed in ascending order
           
           . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           
           . All your code should be in the main function
           
           . You can only use putchar four times maximum in your code
           
           . You are not allowed to use any variable of type char
           
### Solution:

#### <stdio.h>: library required for the PUTCHAR function

###### . MIAN: returns an int, and takes no argument

###### . INT d: holds the value to be printed

###### . FOR: loops through  char '0' to '9', and PUTCHAR prints the value of d

###### . IF: the value of int d is not equal to '9', PUTCHAR adds a space and comma. and prints a newline

###### . RETURN: returns int value a required

<hr>

#### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

[100-print_comb3.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)

#### Write a program that prints all possible different combinations of two digits.

          . Numbers must be separated by ,, followed by a space
            
          . The two digits must be different
            
          . 01 and 10 are considered the same combination of the two digits 0 and 1
            
          . Print only the smallest combination of two digits
            
          . Numbers should be printed in ascending order, with two digits
            
          . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
          
          . You can only use putchar five times maximum in your code
          
          . You are not allowed to use any variable of type char
          
          . All your code should be in the main function
          
### Solution:

##### <stdio.h>: library that is requires for PUTCHAR function

###### . MAIN: returns an int, and takes no argument

###### . INT d, p: both stores integer values to be used for our combination.

###### . FOR: loops through int d that hold the char '0' to '9', and also through p + d that also hold char '0' to '9' to be combined

###### . IF: the first if statment is used to ensure that p != d, to make sure each value is printed once

###### . PUTCHAR: The first two PUTCHAT prints the value of p and d

###### . IF: another if statment that if p == '8' && d == '9' space and comma will not be added

###### . CONTINUE: Ensures that the loop runs to the end.

###### . PUTCHAR: add the space, comma to our output and also a newline

###### . RETURN: return an int as required

<hr>

#### The success combination in business is: Do what you do better... and: do more of what you do...

[101-print_comb4.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)

#### Write a program that prints all possible different combinations of three digits.

          . Numbers must be separated by ,, followed by a space
          
          . The three digits must be different
          
          . 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
          
          . Print only the smallest combination of three digits
          
          . Numbers should be printed in ascending order, with three digits
          
          . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
          
          . You can only use putchar six times maximum in your code
          
          . You are not allowed to use any variable of type char
          
          . All your code should be in the main function
          
### Solutin:

#### <stdio.h>: required to use the PUTCHAR function

###### . MAIN: returns an int, and take no argument

###### . INT d, p, q: declared to hold the char '0' to '9' 3 times.

###### . FOR: loops through the int varaibel that stores a char '0' to '9'

###### . FOR: variable p that stores the value of d + 1, and loops through char '0' to '9'

###### . FOR: third variable q that stores value p + 1, and loops through char '0' to '9'

###### . IF: first if that check if d != p && p != q , to avoid repititions of values

###### . PUTCHAR: the first three PUTCHAR that prints the values of d, p and q

###### . IF: The second if that ensure a comma or space in not included after the last value 789

###### . CONTINUE: That ensures the program reaches the end

###### . PUTCHAR: prints a space, comma, and a newline

###### . RETURN: return int as required

<hr>

#### 12. Software is eating the World

[102-print_comb5.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c)

#### Write a program that prints all possible combinations of two two-digit numbers.

           . The numbers should range from 0 to 99
           
           . The two numbers should be separated by a space
           
           . All numbers should be printed with two digits. 1 should be printed as 01
           
           . The combination of numbers must be separated by comma, followed by a space
           
           . The combinations of numbers should be printed in ascending order
           
           . 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
           
           . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           
           . You can only use putchar eight times maximum in your code
           
           . You are not allowed to use any variable of type char
           
           . All your code should be in the main function
           
### Solution:

#### <stdio.h>: required to use the PUTCHAR function

###### . MAIN: return a int value, and takes no argument

###### . INT p, q: stores the values that will be outputed

###### . FOR: equates p = '0' and loops through to '98', q quates q = p + 1, and loops through it to '99'

###### . PUTCHAR: used four times to output the value of p and q , with another PUTCHAR at the center o both for spacing

###### . The result of ((p / 10) + '0'), ((p % 10) + '0'), ((q / 10) + '0') and ((q % 10) + '0') enable putchar convert our int values to chars

###### . IF: eusures comma and space is not adde to the end of the output

###### . CONTINUE: For a program flow to reach the end

###### . PUTCHAR: two PUTCHAR functions prints space, comma at the end and the last PUTCHAR prints a newline

###### . RETURN: returns int as required


