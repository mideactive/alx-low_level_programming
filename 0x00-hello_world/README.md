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
    
    
    
     TASK (3) Name: Write a script that compiles a C file and creates an executable named cisfun.
    
      . The C file name will be saved in the variable $CFILE
    
    solution:
     
     This problem is also similar to the previous, just that this time around, we want our code to get to the final stage which is linking.
       as usual, still about the flag.
    
     . the gcc key word and the file name will do the trick.
    
     . You sure can use other flags like -Wall,-pedantic etc to check for further errors.
    
     . problem solved...
  
    
    
   TASK (4) :- Hello, puts: Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

     . Use the function puts
     . You are not allowed to use printf
     . Your program should end with the value 0
     
