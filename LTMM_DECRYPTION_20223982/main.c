#include <stdio.h>
#include <stdlib.h>
#include "rc4_init.h"
#include "rc4_stream.h"
#include "rc4_decrypt.h"
int main() {
    int length_s;
    do {
        printf("Nhap do dai cua vector S: ");
        scanf("%d", &length_s);
    } while (length_s <= 0 || length_s >= 257);
    int S[length_s];
    init_S(S, length_s);
    printf("Nhap do dai cua khoa K: ");
    int length_k;
    scanf("%d", &length_k);
    int K[length_k];
    printf("Nhap gia tri cua K:\n");
    for (int i = 0; i < length_k; i++) scanf("%d", &K[i]);
    int T[length_s];
    init_T(T, length_s, K, length_k);
    key_scheduling(S, T, length_s);
    int c_length;
    do {
        printf("Nhap chieu dai chuoi Ciphertext: ");
        scanf("%d", &c_length);
    } while (c_length <= 0 || c_length >= length_s);
    getchar();
    char Cipher[c_length + 1];
    printf("Nhap Ciphertext: ");
    for (int i = 0; i < c_length; i++) scanf("%c", &Cipher[i]);
    Cipher[c_length] = '\0';
    int key_stream[c_length];
    generate_key_stream(S, length_s, key_stream, c_length);
    char Plain[c_length];
    printf("Plaintext la: ");
    decrypt_text(Plain, Cipher, key_stream, c_length);
    return 0;
}
