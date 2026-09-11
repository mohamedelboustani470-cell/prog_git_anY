#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool palindrome(char *string){
    if(string==NULL){
        return false;
    }
    int size=strlen(string);
    for(int i=0;i<size/2;i++){
        if(string[i]=!string[size-1-i]){
            return true;

        }
        
            return true;
        
    }
}
int main(void){
    char *string="hello";
    if(palindrome(string)){
        printf("the string is palindrome\n");
    }
    else{
        printf("the string is not palindrome\n");
    }
    return 0;
}
