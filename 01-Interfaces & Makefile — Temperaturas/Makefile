SOURCE = TablasDeConversion.c
BIN = TablasDeConversion.out
OBJ = TablasDeConversion.o
CONVC = Conversion.c
CONVH = Conversion.h
CONVO = Conversion.o
PRINTC = PrintTablas.c
PRINTH = PrintTablas.h
PRINTO = PrintTablas.o
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

$(BIN): $(OBJ) $(CONVO) $(PRINTO)
	$(CC) $(OBJ) $(CONVO) $(PRINTO) -o $(BIN) $(CFLAGS)
	
$(OBJ): $(SOURCE) $(CONVH) $(PRINTH)
	$(CC) -c $(SOURCE) -o $(OBJ) $(CFLAGS)

$(CONVO): $(CONVH) $(CONVC)
	$(CC) -c $(CONVC) -o $(CONVO) $(CFLAGS)

$(PRINTO): $(PRINTH) $(PRINTC)
	$(CC) -c $(PRINTC) -o $(PRINTO) $(CFLAGS)

clean:
	$(RM) *.o
	