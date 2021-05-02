SOURCE = hello.c
BIN = hello.out
OBJ = hello.o
CONVC = Conversion.c
CONVH = Conversion.h
CONVO = Conversion.o
CC = gcc
CFLAGS = -std=c18

$(BIN): $(OBJ) $(CONVO)
	$(CC) $(OBJ) $(CONVO) -o $(BIN) $(CFLAGS)

run: $(BIN)

$(OBJ): $(SOURCE) $(CONVH)
	$(CC) -c $(SOURCE) -o $(OBJ) $(CFLAGS)

$(CONVO): $(CONVH) $(CONVC)
	$(CC) -c $(CONVC) -o $(CONVO) $(CFLAGS)
