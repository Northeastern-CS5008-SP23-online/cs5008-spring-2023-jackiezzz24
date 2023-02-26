//Jiaqi Zhao
//zhao.jiaqi2@northeastern.edu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
void encrypt(char text[], int key)
{
    //insert your code here
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        char c;
        if (text[i] >= 'A' && text[i] <= 'Z') {
            c = (text[i]- 'A' + key) % 26 + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            c = (text[i]- 'a' + key) % 26 + 'a';
        } else {
            c = text[i];
        }
        text[i] = c;
    }
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{
    
    //insert your code here
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        char c;
        if (text[i] >= 'A' && text[i] <= 'Z') {
            c = (text[i] - 'A' - key + 26) % 26 + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            c = (text[i] - 'a' - key + 26) % 26 + 'a';
        } else {
            c = text[i];
        }
        text[i] = c;
    }
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
