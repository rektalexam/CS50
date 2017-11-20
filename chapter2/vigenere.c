#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[]){
    if(argc == 2){
        for(int q = 0; q < strlen(argv[1]); q++){
            if((argv[1][q] > 90 && argv[1][q] < 97) || argv[1][q] < 65 || argv[1][q] > 122){
                return 1;
            }
        }
        printf("%s %s\n", argv[0],argv[1]);
        int x[strlen(argv[1])];
        for(int z = 0; z < strlen(argv[1]); z++){
            if(argv[1][z] > 64 && argv[1][z] < 92){
                x[z] = (int) argv[1][z] - 65;
            }
            else if(argv[1][z] > 96 && argv[1][z] < 123){
                x[z] = (int) argv[1][z] - 97;
            }
        }
        string plaintext = get_string("plaintext: ");
        int len = strlen(plaintext);
        string ciphertext = plaintext;
        for(int i = 0; i < len ; i++){
            if((plaintext[i] > 90 && plaintext[i] < 97) || plaintext[i] < 65 || plaintext[i] > 122){

            }
            else if(plaintext[i] < 91){
                if(plaintext[i] +  (x[i % strlen(argv[1])]) > 91){
                    ciphertext[i] = plaintext[i] + (x[i % strlen(argv[1])] - 26);
                }
                else{
                    ciphertext[i] = plaintext[i] + (x[i % strlen(argv[1])]);
                }
            }
            else{
                if(plaintext[i] +  (x[i % strlen(argv[1])]) > 123){
                    ciphertext[i] = plaintext[i] + (x[i % strlen(argv[1])] - 26);
                }
                else{
                    ciphertext[i] = plaintext[i] + (x[i % strlen(argv[1])]);
                }
            }
        }
        printf("ciphertext: %s\n", ciphertext);
        return 0;
    }
    else{
        return 1;
    }
}