#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "gook luck";  
    char a[100];               
    char b;                    
    int c = 0;                 
    printf("%s\n", str);
    printf("Nhap ky tu muon xoa: ");
    scanf(" %c", &b);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != b) {
            a[c++] = str[i];
        }
    }
    a[c] = '\0';
    printf("Chuoi sau khi chinh: %s\n", a);
    return 0;
}
