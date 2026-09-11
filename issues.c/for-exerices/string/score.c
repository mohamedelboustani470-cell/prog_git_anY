#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int scoreOfString(char* s) {
    int score=0;
    int n=strlen(s);
    for(int i=0;i<n-1;i++){
        score=score+abs(s[i]-s[i+1]);
    }
    return score;
}
inzt main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    int score = scoreOfString(s);
    printf("Score of the string is: %d\n", score);
    return 0;
}