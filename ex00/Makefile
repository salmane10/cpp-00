NAME	= megaphone
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.opp)
RM		= rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.opp: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all