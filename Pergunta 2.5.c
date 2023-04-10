#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "exemplo de string";
    int length = strlen(str);
    int i;
    
    printf("String original: %s\n", str);
    
    for(i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    
    printf("String invertida: %s\n", str);
    
    return 0;
}
