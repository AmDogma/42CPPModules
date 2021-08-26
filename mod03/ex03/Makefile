NAME = fourth
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

FILES = main.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all
