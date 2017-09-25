NAME1= lem-in
CC= gcc
DSRC= ./srcs/
HEADERS= ./include/
DOBJ= ./obj/
LIB= ./libft/
SRC= $(DSRC)lem-in.c
FLAG= -Wall -Werror -Wextra -I $(HEADERS)
OBJ= $(SRC:$(DSRC)%.c=$(DOBJ)%.o)

all : auteur $(NAME1)

auteur :
	@echo "vbalart" >> auteur

$(NAME) : $(OBJ)
	@make -C $(LIB)
	@echo "Writing executable ✍"
	@$(CC) $(LIB)libft.a $(OBJ) -o $(NAME)

$(OBJ) : | $(DOBJ)

$(DOBJ) :
	mkdir $(DOBJ)

$(DOBJ)%.o : $(DSRC)%.c $(HEADERS)lem-in.h
	@echo "Object manufacturing ⚒"
	@$(CC) $(FLAG) -c $< -o $@

clean:
	@echo "Washing Washing.⚙"
	@rm -rf $(OBJ)

fclean: clean
	@echo "WASHING ⚙  WASHING ⚙  WASHING ⚙"
	@rm -rf $(NAME)

re : fclean all
