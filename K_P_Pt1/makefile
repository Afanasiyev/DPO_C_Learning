all: prog

prog: main.o temp_api.o 
	gcc -o prog main.o temp_api.o  

<<<<<<< HEAD
main.o: main.c temp_api.h
=======
main.o: temp_api.c temp_api.h
>>>>>>> f06ac03ad64141f4807942f9a8abcef423b7c8dc
	gcc -c -o main.o main.c	

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe