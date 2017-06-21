CC=gcc

var= -loperand

CFLAGS= -g -fpic -I include/ -L /usr/local/lib/tup/

path= /home/divya/WorkStation/Calculator/build
#$(OBJDIR)/%.o: %.c
#	$(CC) $(CFLAGS) -c -o $@ $<

calculate: 	$(path)/main.o $(path)/sum.o $(path)/sub.o $(path)/mul.o $(path)/div.o 
		$(CC)  -o bin/calculate  $(CFLAGS) ./build/*.o $(var)

$(path)/main.o: src/main.c
		$(CC) -c $(CFLAGS) src/main.c -o $(path)/main.o
$(path)/sum.o: src/sum.c
		$(CC) -c $(CFLAGS) src/sum.c -o  $(path)/sum.o
$(path)/sub.o: src/sub.c
		$(CC) -c $(CFLAGS) src/sub.c -o  $(path)/sub.o
$(path)/mul.o: src/mul.c
		$(CC) -c $(CFLAGS) src/mul.c -o  $(path)/mul.o
$(path)/div.o: src/div.c
		$(CC) -c $(CFLAGS) src/div.c -o  $(path)/div.o


clean:
	rm -f src/*.o
	rm -f bin/*
	rm -f *.o
	rm -f ./build/*.o

install:
	./bin/calculate
