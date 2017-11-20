/**
 * hello.c
 *
 * CS50 AP
 * Old Friends
 *
 * Greets a user by their name.
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc != 1){
        // collect a string from the user, then print their name
        string name = argv[1];
        printf("Hello, %s!\n", name);
        return 0;
    }
    else{
        return 1;
    }
}
