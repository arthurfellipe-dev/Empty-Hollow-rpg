CC = gcc

SRC = src
INC = include

SOURCES = $(wildcard $(SRC)/*.c)

OBJ = $(SOURCES:.c=.o)

OUT = rpg

CFLAGS = -I$(INC)

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(SRC)/*.o $(OUT)
