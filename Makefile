CC=gcc
OUTPUT=not-simulink
SOURCE0=main
SOURCE1=block-functions
SOURCE2=matrix

all: $(SOURCE0).o $(SOURCE1).o $(SOURCE2).o
	$(CC) -o $(OUTPUT) $(SOURCE0).o $(SOURCE1).o $(SOURCE2).o

$(SOURCE0).o:	$(SOURCE0).c
	$(CC) -c -o $(SOURCE0).o $(SOURCE0).c

$(SOURCE1).o:	$(SOURCE1).c $(SOURCE1).h
	$(CC) -c -o $(SOURCE1).o $(SOURCE1).c

$(SOURCE2).o:	$(SOURCE2).c $(SOURCE2).h
	$(CC) -c -o $(SOURCE2).o $(SOURCE2).c
