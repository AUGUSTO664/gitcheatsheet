//this is the exercise 10
//Arryas of strings, looping, here's code that will print out any command line arguments

#include <stdio.h>

int main (int argc, char *argv[])
{

 int i = 0;
 //go trough each string in argv
 //why am I skipping argv[0]?

 for(i = 1; i < argc; i++){
      printf("arg %d: %s\n",i, argv[i]);

 }

 //let's make our own array of strings
 char *states[]= {"california", "oregon", "washington", "texas"};

 int num_states = 4;
 //this for prints all the array's elements
 for(i=0; i<num_states; i++){
    printf("state %d: %s\n", i, states[i]);
 }

 return 0;
}
