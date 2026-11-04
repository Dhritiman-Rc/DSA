## GNU MAKEFILE ##

.PHONY: all


CFLAGS = -Iinclude -O3




BUILD=build
SRC=src/btree_q.c src/main.c
BUILD=build/
OBJ=build/btree_q.o build/main.o 

TARGET=btree_traversal



$(TARGET): $(OBJ)
	$(shell rm *.o)
	$(CC) -o $(TARGET) $(OBJ)

	

$(OBJ): $(SRC)
	$(CC) -c $(SRC) $(CFLAGS) 
	$(shell mv *.o build/) 

clean:
	$(shell rm build/*.o $(TARGET))


## END OF GNU MAKEFILE ##
