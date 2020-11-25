# change-to-parent-directory
Print out current directory then change to parent directory and print out updated current directory.

Brady Lange

03/12/18

Op Sys Programming

Assignment 3

## `src/my_cd.c`
The change directory program works by using the `getcwd()` function to grab the users current working directory
then calls the `mycd()` function prints the users current directory. Afterwards, the current directory is changed
using the `chdir()` function. Finally, if the directory was successfully changed the `getcwd()` function 
will be called again to grab the new current directory and the new directory will be printed out. Otherwise, the 
program will throw an error if the directory wasn't successfully changed.

Input:

`a.out`

Output:

`Your current working directory is: /home/user`

`Changing your current directory to your parent directory...`

`Your NEW current working directory is: /home`