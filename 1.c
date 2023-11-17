#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(const char str[]){
    int len = 0;
    while(str[len] != '\0') len++;
    return len;
}
int stepen(int c, int n){
    int res = 1;
    for(int i = 0; i < c; i++) res *= n;
    return res;
}
int int_str(const char str[]){
    int i = strlen(str) - 1, res = 0;
    while (i >= 0)
    {
        res += ((int)str[i]- 48) * stepen(strlen(str)-i-1, 10);
        i--;
    }
    return res;

}
char* str_int(int num, char* str, int k){
    int n = num, i = 0;

    while (n > 0)
    {
        str[k - i++ - 1] = n % 10 + 48;
        n /= 10;
    }
    return str;

}
void DelSymbor(char* str, char sym){
    char* p1 = str, *p2 = str;
    while(*p1){
        if(*p1 == sym){
            p1++;
        }
        else{
            *p2 ++ = *p1 ++;
        }
    }
    *p2 = '\0';
}
// есть массив у которого есть пара элементов необходимо найти значение у которого нет пары(нельзя выделять доп память) вывести элемент
void main(){
    char str[100];
    char s2[100] = "eewr34ewsdhfuih4wuyhr7yf23hyhdsiyrnvw";
    int num = 781, k = 0;
    int n = num;
    while(n> 0){
        n/=10;
        k++;
    }
    char* str_dyn = malloc(k);
    char s1[15] = " 5";
    char ex_str1[15] = "hello world!";
    char ex_str2[15] = "Sasha";
    char* newstr = strcat(ex_str1, ex_str2);
    DelSymbor(s2, 'w');
    printf("%s \n", s2);
    printf("%lu \n", strlen(ex_str1));
    printf("%d \n", int_str("500"));
    printf("%s \n", str_int(num, str_dyn, k));
}