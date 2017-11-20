#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[]){
    if(argc == 2){
        int x = atoi(argv[1]) % 26;
        string plaintext = get_string("plaintext: ");
        int len = strlen(plaintext);
        for(int i = 0; i < len ; i++){
            if(plaintext[i] + x < 122 && plaintext[i] > 96){
                plaintext[i]=plaintext[i] + x;
            }
            else if(plaintext[i] + x < 91){
                plaintext[i]=plaintext[i] + x;
            }
            else{
                plaintext[i]=plaintext[i] + x - 26;
            }
        }
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
    else{
        return 1;
    }

}