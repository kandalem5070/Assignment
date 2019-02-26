#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

string n;
int main(int argc, string argv[])

{
    if(argc !=2)
    {
        printf("type again: ");
    }
    int key = atoi(argv[1]);

    string s= get_string("enter your plaintext: ");

    printf("ciphertext: ");

    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
        {
            printf("%c",((s[i] - 'A') + key)%26 + 'A');
        }
        else if(islower(s[i]))
        {
           printf("%c", ((s[i] - 'a') + key)%26 + 'a');
        }
        else
        {
            printf("%c",s[i]);
        }

    }
     printf("\n");
}