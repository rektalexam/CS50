/**
 * pennies.c
 *
 * CS50 AP
 * Old Friends
 *
 * Calculates how many pennies a user would get if their change
 * doubles each day using command line information
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

// defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    if(argc != 1 && atoi(argv[1]) >= MIN_DAYS && atoi(argv[1]) <= MAX_DAYS && atoi(argv[2]) >= 1){
        // get a number of days in [28, 31]
        int days;
        do
        {
            days = atoi(argv[1]);
        }
        while(days < MIN_DAYS || days > MAX_DAYS);
        // get a number of pennies in [0, inf)
        int pennies;
        do
        {
            pennies = atoi(argv[2]);
        }
        while(pennies <= 0);
        // relatively few pennies required to get out of bounds of int
        long long total = pennies;
        // add double the amount of pennies of the previous day each day
        for(int i = 1; i < days; i++)
        {
            total += pennies * pow(2,i);
        }
        // output the total as dollars and cents only
        printf("$%.2f\n", ((double) total) / 100);
        return 0;
    }
    else{
        return 1;
    }
}