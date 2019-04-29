#include <stdio.h>
// the entire program is the reverse of the encryption process
int main()
{
char message[100], ch;
int x, key;
printf("Enter a message to decrypt: ");
gets(message);
printf("Enter key: ");
scanf("%d", &key);
for(x = 0; message[x] != '\0'; ++x){
ch = message[x];
if(ch >= 'a' && ch <= 'z'){
ch = ch - key;
if(ch < 'a'){
ch = ch + 'z' - 'a' + 1;
}
message[x] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch - key;
if(ch < 'A'){
ch = ch + 'Z' - 'A' + 1;
}
message[x] = ch;
}
}
printf("Decrypted message: %s", message);
return (0)
}
