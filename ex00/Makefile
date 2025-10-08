SRC=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
F_EXT = .cpp

OBJ = $(SRC:$(F_EXT)=.o)

TARGET = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


%.o: %$(F_EXT)
	$(CC) $(CFLAGS) -o $@ -c $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(TARGET) 

all: $(TARGET)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

exec: all
	./$(TARGET) "shhhhh... I think the students are asleep..."
	./$(TARGET) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(TARGET)

.PHONY: all re clean fclean exec
