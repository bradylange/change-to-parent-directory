#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*
* Brady Lange
* 3/12/18
* File name: mycd.c
* This program is my own version of changing directories in the bash shell using a C program
*/

//My changing directory function
void mycd(char * wd)
{
	//Printing the current working directory
	printf("Your current working directory is: %s\n", wd);

	//Changing the current working directory to its parent directory
	printf("Changing your current directory to your parent directory...\n");
	int change;
	change = chdir("..");
	//If change equals 0 the directory change was successful
	if(change == 0)
	{	
		//Printing the current working directory again to prove it has been changed
		int size;
		char * buffer;
		wd = getcwd(buffer, (size_t)size);
		printf("Your NEW current working directory is: %s\n", wd);
	}
	//If the current directory was not change throw an error
	else
	{
		printf("mycd error: The directory failed to change.\nThe current directory is still: %s\n", wd);
		exit(1);
	}
 
} //End of mycd function

//Main function to test my changing directory function
int main(int argc, char * argv[])
{
	//Getting the absolute path of the current working directory
	int size;
	char * buffer;
	//Storing the absolute path in a pointer
	char * wdPointer = argv[0];

	//Grabbing the current working directory
	wdPointer = getcwd(buffer, (size_t)size);

	//Sending it to the mycd function to be processed
	mycd(wdPointer);

	return 0;
}
 