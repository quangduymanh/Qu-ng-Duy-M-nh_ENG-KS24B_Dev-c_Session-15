#include<stdio.h>
#include<string.h>
int main(){
	char str[]="good luck";
	int length = strlen(str);
	printf("%s\n",str);
	for (int i=0; i<length;i++){
		if (i ==0 || str [i-1]==' '){
			if (str [i]>='a'&&str[i]<= 'z'){
				str[i]-=32;
			}
		}
	}
	printf("chuoi viet hoa : %s\n",str);
	return 0;
}
