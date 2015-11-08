#include <cstdio>
#include <omp.h>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[]){
	printf("Bienvenido Programador de OpenMP...\n\n");

	#pragma omp parallel num_threads(20)
	{
		int id = omp_get_thread_num();
		int size = omp_get_num_threads();
		printf("Hola desde el hilo %d,somos %d\n", id, size);
	}
	
	double inicio, fin, intervalo;
	inicio = omp_get_wtime();
	Sleep(1000);
	fin = omp_get_wtime();
	intervalo = omp_get_wtick();
	printf("\n tiempo transcurrido: %lf milisegundos \nPrecision del tick: %g nanosegundos\n", (fin - inicio)*1.0e3, intervalo*1.0e9);

	getchar();
	return 0;
}