#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int letters = 0, digits = 0, specials = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ') {
            specials++;
        }
    }
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specials);
    return 0;
}
