.SUFFIXES: .o .c
.c.o:
		$(CC) -c $(CFLAGS) $<

#Macros:

CC = gcc
CFLAGS = -g -Wall -O2 -lwiringPi
SRC = testMCP.c analogToDigital.c analogToDigital.h
OBJ = testMCP.o analogToDigital.o


#Reglas explicitas:

all:	$(OBJ)
		$(CC) $(CFLAGS) -o mcpTry $(OBJ)
clean:
		$(RM) $(OBJ) mcpTry

#Reglas implicitas:

analogToDigital.o: analogToDigital.c analogToDigital.h
testMPC.o: testMCP.c analogToDigital.h

