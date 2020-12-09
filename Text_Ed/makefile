CC=gcc
CFLAGS=-g -Wall 
XFLAGS=-Wextra -pedantic
TARGET=kilo
CVERSION=-std=c99

$(TARGET): $(TARGET).c
	$(CC) $(TARGET).c -o $(TARGET) $(CFLAGS) $(XFLAGS) $(CVERSION)
	
clean:
	$(RM) *.o $(TARGET).exe