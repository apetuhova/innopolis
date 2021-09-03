#include <stdio.h>
#include <unistd.h>


int main(){
		FILE *f;
		f = fopen("ex4.txt", "w"); //fuser ex4.txt показывает, что файл используется одним процессом
		sleep(10);
        fork(); //файл используется двумя процессами - родительским и дочерним
		sleep(10);
		fclose(f); //после закрытия потока файл перестал использоваться обоими процессами
		sleep(10);
		return 0;
}
