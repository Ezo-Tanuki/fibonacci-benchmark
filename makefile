
all: mylib.o func.time.o
	gcc -o main_test.out main_test.c mylib.o;
	gcc -o main_b_time_iterative.out main_b_time_iterative.c mylib.o func.time.o;
	gcc -o main_b_time_recursive.out main_b_time_recursive.c mylib.o func.time.o;

mylib.o:
	gcc -o mylib.o -c myutils/mylib.c

func.time.o:
	gcc -o func.time.o -c myutils/func.time.c

clear:
	rm -rf *.out
	rm -rf *.o