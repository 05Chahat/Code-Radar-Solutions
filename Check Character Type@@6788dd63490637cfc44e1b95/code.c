#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if ((a>='a' && a<='z')||(a>='A' && a<='Z')){
        switch (a) {
            case'a':printf("Vowel");break;
            case'e':printf("Vowel");break;
            case'i':printf("Vowel");break;
            case'o':printf("Vowel");break;
            case'u':printf("Vowel");break;
            case'A':printf("Vowel");break;
            case'E':printf("Vowel");break;
            case'I':printf("Vowel");break;
            case'O':printf("Vowel");break;
            case'U':printf("Vowel");break;
            default:printf("Consonant");
        }
    }
    else if (a>='0' && a<=9){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    return 0;
}