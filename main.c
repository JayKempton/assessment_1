#include <stdio.h>

int main() {
  
char message[100], ch;  //use the array message to store the user input
int x, key;
printf("Enter a message to encrypt: ");
gets(message);    //Using gets makes it easier to store sting data in the variable "message" than scanf
printf("Enter key: ");
scanf("%d", &key);
for(x = 0; message[x] != '\0'; ++x){    //use a for loop to count the character in the string and assign them a value in the array
ch = message[x];    
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 'z'){             // create if statements to determine the spaces the characters must move to become encrypted
ch = ch - 'z' + 'a' - 1;
}
message[x] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
message[x] = ch;
}
}
printf("Encrypted message: %s", message);     //print the encrypted message  
return 0;


return (0)
}
