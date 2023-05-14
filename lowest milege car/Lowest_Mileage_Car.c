/*   Question
The name and mileage of certain cars is passed as the input. The format is
CARNAME@MILEAGE and the input is as a single line, with each car information
separated by a space. The program must print the car with the lowest mileage.
(Assume no two cars will have the lowest mileage)
Input Format:
The first line contains the CARNAME@MILEAGE separated by a space.
Output Format:
The first line contains the name of the car with the lowest mileage.
Boundary Conditions:
The length of the input string is between 4 to 10000.
The length of the car name is from 1 to 50.
Example Input/Output 1:
Input:
Zantro@16.15 Zity@12.5 Gamry@9.8
Output:
Gamry*/

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
