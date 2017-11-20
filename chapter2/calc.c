#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[]){
    if(argc == 4){
        float retrn = 0;
        float x = atof(argv[1]);
        float y = atof(argv[3]);
        int q = 0;
        string sign = argv[2];
        if(strcmp(sign, "+")==0){
            retrn = x + y;
            printf("%f\n", retrn);
            return 0;
        }
        else if(strcmp(sign, "%")==0){
            q = (int) (x / y);
            retrn = x - (y * q);
            printf("%f\n", retrn);
            return 0;
        }
        else if(strcmp(sign, "-")==0){
            retrn = x - y;
            printf("%f\n", retrn);
            return 0;
        }
        else if(strcmp(sign, "X")==0){
            retrn = x * y;
            printf("%f\n", retrn);
            return 0;
        }
        else if(strcmp(sign, "/")==0){
            retrn = x / y;
            printf("%f\n", retrn);
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 1;
    }
}