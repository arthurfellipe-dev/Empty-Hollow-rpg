
CC = gcc

SRC = src
INC = include
OBJ = $(SRC)/main.o $(SRC)/player.o $(SRC)/combate.o $(SRC)/world.o $(SRC)/itens.o

OUT = rpg

CFLAGS = -I$(INC)

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

$(SRC)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(SRC)/*.o $(OUT)
