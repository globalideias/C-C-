#include<stdio.h>
#include<string.h>

int main(){

    char str[25];
    int i;
    printf("Escreva uma palavra: ");
    scanf("%20[^\n]",str);
    //gets(str);

    for(i=0;i<=strlen(str);i++){
	if(str[i]>=65&&str[i]<=90){

	    printf("%c -> %c\n",str[i],(str[i]+32));
	    str[i]=str[i]+32;	    
	}
	//printf("%c -> %c\n",str[i],(str[i]-32));
    }
    printf("\n Palavra em Maiusculo: %s",str);
    return 0;  
}