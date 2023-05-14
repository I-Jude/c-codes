#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
float b=0;
char c=' ';
while(c==' '){
    char a[100];
    float v;
    scanf("%[^@]@%f%c",&a,&v,&c);
    if(b==0){
        b=v;
        strcpy(s,a);
    }
    else if(v<b){
        b=v;
        strcpy(s,a);
    }
    }
printf("%s",s);

}