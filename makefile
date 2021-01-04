CC=gcc
AR=ar
FLAGS=-Wall -g


all:libIsort.so libtxtfind.so isort txtfind



isort:  isort.o libIsort.so
	$(CC) $(FLAGS) -o isort isort.o libIsort.so
	
libIsort.so: isort.o
	$(CC) -shared -o libIsort.so isort.o
	
	
isort.o: isort.h isort.c
	  $(CC) $(FLAGS) -c -fPIC isort.c
	  
	  
txtfind:  txtfind.o libtxtfind.so
	$(CC) $(FLAGS) -o txtfind txtfind.o libtxtfind.so
	

libtxtfind.so: txtfind.o
	$(CC) -shared -o libtxtfind.so txtfind.o
	
txtfind.o: txtfind.h txtfind.c
	  $(CC) $(FLAGS) -c -fPIC txtfind.c
	  
	  
.PHONY:clean all
clean:
	rm -f *.o *.a *.so isort txtfind
	  
	  

	
	
	
