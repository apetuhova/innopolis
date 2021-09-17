#include <stdio.h>
#include <unistd.h>

int main(){
        //int k=3; в итоге будет запущено 8 процессов т.к. на каждой итерации создается копия родительского процесса
        int k=5; //32 процесса
        for(int i=0;i<k;i++){
                fork();
                sleep(5);
        }
        return 0;
}
