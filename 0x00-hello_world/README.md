    OS: linux:- ubuntu 20.4

-My first alx c project: 0x00-hello_world

   TASK (0) preprocessor :- writes a script that runs a c file through the preprocessor and save the result in another file.

      . The name of the c file is main.c

      . The c file will be saved in a variable $CFILE

      . The name of the file my script is saved is 0-preprocessor 

      . The output should be saved as .c
      
 Solution:

  . save the main.c file (which i have already created) to the $CFILE using the linux export command

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
    
   Solving the task 1 is similar to the solution of task 0. But, there is difference task 0.
