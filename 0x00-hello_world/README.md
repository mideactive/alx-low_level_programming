    OS: linux:- ubuntu 20.4

-My first alx c project: 0x00-hello_world

   TASK (0) preprocessor :- writes a script that runs a c file through the preprocessor and save the result in another file.

      . The name of the c file is main.c

      . The c file will be saved in a variable $CFILE

      . The name of the file my script is saved is 0-preprocessor 

      . The output should be saved as .c
      
 Solution:

  . save the main.c file (an already created file) to the $CFILE using the linux export command

  . create 0-preprocessor file using the touch linux touch command

  . opend 0-preprocessor file with a vim text editor

  . addedshebang at the first line of my script

  . The second line of my script, contains the gcc code that runs my file through a preprocessor using the -E gcc flag and the -o gcc flag to create a        new file c.

  . code is saved, and converted into an executable file using chmod linux command

  . task 0 preprocessor problem solved.



    TASK (1) compiler :- Write a script that compiles a C file but does not link.
    
       . The C file name will be saved in the variable $CFILE
       . The output file should be named the same as the C file, but with the extension .o instead of .c.
     Example: if the C file is main.c, the output file should be main.o  
    
    Solution:
    
   Solving the task 1 is similar to the solution of task 0. But, there is difference task 0. The difference is the gcc flag used.
   
   . use the linux export command to save main.c inside tha $CFILE variable.
   
   . open a file in which u want to write your script with the touch command, or you can open directly using the vim <file> command
    
   . first line contains the shebang to make the file executable
    
   . second line contains the gcc compiler code, but, the -c flag should be included to make the code compile, but doesn't link (view: man gcc).
     followed by the -o flag to save the file to the output file main.o.
    
   . save file and use the linux chmod to make the file executable
    
   . problem solved....
    
    
    
    TASK (2) Assembler:- Write a script that generates the assembly code of a C code and save it in an output file.
    
        . The C file name will be saved in the variable $CFILE
    
        . The output file should be named the same as the C file, but with the extension .s instead of .c.
  
      Example: if the C file is main.c, the output file should be main.s

    solution:
    
    Just like 'task (1)', the solution of task one is also similar to that of task 2. of course, with different gcc flags.
    
     . we can use the steps in task 0 and i to solve two. we only need to use different gcc flags. with the -c -S gcc flags,
       we can generate the assembler code of our script. The gcc man page gives better clue on this.
    
     . task 2 solved....
    
    
    
     TASK (3) Name:- Write a script that compiles a C file and creates an executable named cisfun.
    
      . The C file name will be saved in the variable $CFILE
    
    solution:
     
     This problem is also similar to the previous, just that this time around, we want our code to get to the final stage which is linking.
       as usual, still about the flag.
    
     . the gcc key word and the file name will do the trick.
    
     . You sure can use other flags like -Wall,-pedantic etc to check for further errors.
    
     . problem solved...
  
    
    
   TASK (4) Hello, puts:- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

     . Use the function puts
     . You are not allowed to use printf
     . Your program should end with the value 0
    
            Solution:
       . Open  the 4-puts.c file with a text editor eg vim.
       . Use the standard library <stdio.h> as the header file
       . Describe what the code is meant to do inside a betty styled comment
       . Our code is written inside the main function. our main function return an int, but does not take any arguments.
       . Create a char data-type, with a pointer variable that can old a string of characters.
       . Initialize the variable with the given string, a string is always inside a double quote. We must also escape \" the quote sign to enable "
         display with our our string.
       . We can now use our puts function to display our string, because we are only asked to use puts.
       . We end our program with a return value which is 0.
       . Save the code and compile using gcc and the necessary flags.
       . problem solved.
    
    
    
    TASK (5):- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
       
       . Use the function printf
       . You are not allowed to use the function puts
       . Your program should return 0
       . Your program should compile without warning when using the -Wall gcc option
     
       Solution:
    
       . We can solve task 5 by using similar steps that we used or task 4, The only difference is that we will use printf instead of puts.
       . Our printf takes two arguments, the specifier %s that displays a string, and the variable that holds the string.
       . We end our program with a return value which is 0
       . Save the code and compile using gcc with necessary flags.
       . problem solved..
    
    
    
    TASK (6):- Write a C program that prints the size of various types on the computer it is compiled and run on.
    
       . You should produce the exact same output as in the example
       . Warnings are allowed
       . Your program should return 0
       . You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option.
    
       Solution:
    
        . Here, we are asked to display the size of the char,short,int etc.
        . We create out header file with the standard library <stdio.h>
        . We also create our betty style comments, that says what we want our code to do.
        . Then our main function is created, to return an int and with void as argument.
        . We can now use a printf function which takes two arguments. The first argument is our access specifier %d which prints out an int.
          The second argument is our data-type wrap inside the sizeof function to help ascertain the sizes of our different data-types on different
          machines eg. 64 or 32 bit machines.
        . We end our code with a return value which is 0.
        . We save and compile using gcc and necessary flags.
        . problem solved.
    
    
     TASK (7) INTEL:- Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
    
        . The C file name will be saved in the variable $CFILE.
        . The output file should be named the same as the C file, but with the extension .s instead of .c.
        . Example: if the C file is main.c, the output file should be main.s
