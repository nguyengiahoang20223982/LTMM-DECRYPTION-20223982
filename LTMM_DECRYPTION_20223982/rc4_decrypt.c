#include <stdio.h>
#include "rc4_decrypt.h"

void decrypt_text(char Plain[], char Cipher[], int key_stream[], int c_length) {
    for(int i = 0; i < c_length; i++){
       //int tmp = (int)(key_stream[i] + (int)'0') ^ (int)Plain[i];
       int tmp = key_stream[i] ^ (int)Cipher[i];
       printf("%c ", (char)tmp);
    }
    printf("\n");
}
