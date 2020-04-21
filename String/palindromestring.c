#include <stdio.h> 
#include <string.h> 
void isPalindrome(const char str[]){
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l){
        if (str[l++] != str[h--]){
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}

int main(){
    #include <stdio.h> 
#include <string.h> 
void isPalindrome(const char str[])
{
 
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}

int main()
{
    char str[20];
    scanf_s("%s", str,20);
    isPalindrome(str);
}
}
