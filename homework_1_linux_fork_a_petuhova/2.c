#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main(){
        char command[50];
        int sys;
        bool flag=true;
        while(flag) {
                printf("Введите команду. Для выхода наберите q\n");
                scanf("%s",command);
                if(strcmp(command,"q")!=0){
                        sys = system(command);}
                else flag=false;
                }
        return 0;
}
