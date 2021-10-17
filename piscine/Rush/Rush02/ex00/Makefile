CC=gcc

CFLAGS=-Wall -Wextra -Werror
LDFLAGS=
SOURCES=main.c rush02.c
OBJECTS=$(SOURCES:.c=.out)
EXECUTABLE=rush02

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.out:
	$(CC) $(CFLAGS) $< -o $@
