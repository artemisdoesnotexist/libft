# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-der <avan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/05/19 19:21:19 by avan-der      #+#    #+#                  #
#    Updated: 2023/05/20 10:48:06 by avan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a
INCLUDES	=	include/
SRC_DIR 	=	src/
OBJ_DIR		=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

# COLORS
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# SOURCES
FTIS_DIR	=	is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

FTPUT_DIR	=	put/
FTPUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTTO_DIR	=	to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	str/
FTSTR		=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

FTLST_DIR	=	lst/
FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
BONUS_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
BONUS_OBJ	= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))

###

OBJF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(FTIS_DIR)
			@mkdir -p $(OBJ_DIR)$(FTMEM_DIR)
			@mkdir -p $(OBJ_DIR)$(FTPUT_DIR)
			@mkdir -p $(OBJ_DIR)$(FTTO_DIR)
			@mkdir -p $(OBJ_DIR)$(FTSTR_DIR)
			@mkdir -p $(OBJ_DIR)$(FTLST_DIR)

bonus:		$(BONUS_OBJ)
			@$(AR) $(NAME) $(BONUS_OBJ)
			@echo "Libft bonus compiled!"

clean:
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJF)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all

norm:
			@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm