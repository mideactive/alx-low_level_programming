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

##### Solution:
######    It a simple case of using the conditional statements if, else if and else

          The variable 'n' has been initlized rand() - RAND_MAX / 2 to generate random numbers
          
          If 'n' is greater(>) than 0, 'n' returns a positive integer value of variable 'n' with a string "is positive"
          
          Else if 'n' is equal(==) 0, 'n' zero with a the string "is zero"
          
          Else 'n' return a nagative integer, 'n' should print variable 'n' with the string "is nagative"
<hr>


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
    
 <hr>
    
    
##### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

[2-print_alphabet.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)

##### Write a program that prints the alphabet in lowercase, followed by a new line.

           . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           
           . All your code should be in the main function
           
           . You can only use putchar twice in our code
           
##### Solution:

###### Task 2 require that we use a loop statement. in this case, i used a 'for' loop, which keeps running as long as the condition is true.

          . Create a variable that accepts a char datatype named 'x'
          
          . Use a for x equals the askey 'a'; x <= askey 'z'; z++, ensure our variable starts looping from 'a' and ends at 'z'
          
          . All this are done inside the main function.
          
          . We are asked to use only putchar, which takes only one argument i.e putchar(x)
          
          .The we have our code print 'a' to 'z' int lower case alphabet.
          
<hr>

#### 3. alphABET

[3-print_alphabets.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)

##### Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

           . You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
           . All your code should be in the main function
           . You can only use putchar three times in your code
           
##### Solution:

###### Just like tast two, we will use a 'for' statement to loop through characters, but we have to do it twice this time around.

          . First we loop through the lower case alphabet of 'a' to 'z'
          
          . Secondly, we also loop through the upper case of alphabet 'A' to 'Z'
          
          . We are only allowed to use putchar for our output, putchar takes a single char argument i.e putchar(value)
          
          . The we print the result of our variable twice using putchar.
          
          . The last putchar prints the newline
          
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

         . Declare a char variable eg x
         
         . for x equal askey 'a'; x <= askey 'z'; x++
         
         . Use a conditional if statment, i.e if ((x not equal 'e') and (x not equal 'q'))
         
         . Print the values of variable x, using  putchar i.e putchar(x)
         
         . We will use another putchar to makes sure a output is followed by a newline.
         
         . All this is done inside the main function
<hr>
         
#### 5. Numbers

[5-print_numbers.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)

##### Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

          . All your code should be in the main function
          
##### Solution:
