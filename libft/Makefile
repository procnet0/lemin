# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbalart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:40:06 by vbalart           #+#    #+#              #
#    Updated: 2016/11/10 16:41:11 by vbalart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= gcc
DSRC= ./srcs/
HEADERS= ./includes/
DOBJ= ./obj/
SRC=	$(DSRC)ft_atoi.c $(DSRC)ft_bzero.c $(DSRC)ft_isalnum.c\
		$(DSRC)ft_isalpha.c $(DSRC)ft_isdigit.c $(DSRC)ft_isprint.c\
		$(DSRC)ft_itoa.c $(DSRC)ft_memalloc.c $(DSRC)ft_memccpy.c\
		$(DSRC)ft_memchr.c $(DSRC)ft_memcmp.c $(DSRC)ft_memcpy.c\
		$(DSRC)ft_memdel.c $(DSRC)ft_memmove.c $(DSRC)ft_memset.c\
		$(DSRC)ft_putchar.c $(DSRC)ft_putchar_fd.c $(DSRC)ft_putendl.c\
		$(DSRC)ft_putendl_fd.c $(DSRC)ft_putnbr.c $(DSRC)ft_putnbr_fd.c\
		$(DSRC)ft_putstr.c $(DSRC)ft_putstr_fd.c $(DSRC)ft_strcat.c\
		$(DSRC)ft_strchr.c $(DSRC)ft_strclr.c $(DSRC)ft_strcmp.c\
		$(DSRC)ft_strcpy.c $(DSRC)ft_strdel.c $(DSRC)ft_strdup.c\
		$(DSRC)ft_strequ.c $(DSRC)ft_striter.c $(DSRC)ft_striteri.c\
		$(DSRC)ft_strjoin.c $(DSRC)ft_strlcat.c $(DSRC)ft_strlen.c\
		$(DSRC)ft_strmap.c $(DSRC)ft_strmapi.c $(DSRC)ft_strncat.c\
		$(DSRC)ft_strncmp.c $(DSRC)ft_strncpy.c	$(DSRC)ft_strnequ.c\
		$(DSRC)ft_strnew.c $(DSRC)ft_strnstr.c $(DSRC)ft_strrchr.c\
		$(DSRC)ft_strsplit.c $(DSRC)ft_strstr.c $(DSRC)ft_strsub.c\
		$(DSRC)ft_strtrim.c $(DSRC)ft_tolower.c $(DSRC)ft_toupper.c\
		$(DSRC)ft_islower.c $(DSRC)ft_isupper.c $(DSRC)ft_num_len.c\
		$(DSRC)ft_isbigger.c $(DSRC)ft_issmaller.c $(DSRC)ft_lstaddend.c\
		$(DSRC)ft_lstadd.c $(DSRC)ft_lstaddend.c $(DSRC)ft_lstdel.c\
		$(DSRC)ft_lstdelone.c $(DSRC)ft_lstiter.c $(DSRC)ft_lstmap.c\
		$(DSRC)ft_lstnew.c $(DSRC)ft_isascii.c $(DSRC)get_next_line.c\
		$(DSRC)ft_malloc_prot.c $(DSRC)linear_interpolation.c
FLAG= -Wall -Werror -Wextra -I $(HEADERS)
OBJ= $(SRC:$(DSRC)%.c=$(DOBJ)%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "Ordering the library. ✍"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ) : | $(DOBJ)

$(DOBJ) :
	mkdir $(DOBJ)

$(DOBJ)%.o : $(DSRC)%.c $(HEADERS)libft.h $(HEADERS)get_next_line.h
	@echo "Object manufacturing ⚒"
	@$(CC) $(FLAG) -c $< -o $@

clean :
	@echo "Washing Washing.⚙"
	@rm -rf $(OBJ)

fclean : clean
	@echo "WASHING ⚙  WASHING ⚙  WASHING ⚙"
	@rm -rf $(NAME)

re : fclean all
