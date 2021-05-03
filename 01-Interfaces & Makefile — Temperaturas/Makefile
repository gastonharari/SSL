SOURCE = TablasDeConversion.c
BIN = TablasDeConversion.out
OBJ = TablasDeConversion.o
CONVC = Conversion.c
CONVH = Conversion.h
CONVO = Conversion.o
SOURCETEST = ConversionTest.c
BINTEST = ConversionTest.out
OBJTEST = ConversionTest.o
CC = gcc
CFLAGS = -std=c18
RM = rm -f

all: $(BIN) $(BINTEST) clean

$(BINTEST): $(OBJTEST) $(CONVO)
	$(CC) $(OBJTEST) $(CONVO) -o $(BINTEST) $(CFLAGS)

$(OBJTEST): $(SOURCETEST) $(CONVH)
	$(CC) -c $(SOURCETEST) -o $(OBJTEST) $(CFLAGS)

$(BIN): $(OBJ) $(CONVO)
	$(CC) $(OBJ) $(CONVO) -o $(BIN) $(CFLAGS)
	
$(OBJ): $(SOURCE) $(CONVH)
	$(CC) -c $(SOURCE) -o $(OBJ) $(CFLAGS)

$(CONVO): $(CONVH) $(CONVC)
	$(CC) -c $(CONVC) -o $(CONVO) $(CFLAGS)

clean:
	$(RM) *.o
	