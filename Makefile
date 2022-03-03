SRC				= push_swap.c 

SORT 			= push.c swap.c rotate.c reverse_rotate.c

FOLDER_SORT 	= sort_files/

NAME			= push_swap

LIBFT 			= include/libftprintf.a

LIBFT_PATH		= ./include

RM				= rm -f

CC				= gcc

CFLAGS  		= -Wall -Wextra -Werror

SRCS			= $(addprefix ${FOLDER_SORT},${SORT})

OBJS			= ${SRC:.c=.o}
OBJS_SORT		= ${SRCS:.c=.o}

OBJ				= ${OBJS_SORT} ${OBJS}

${NAME}:	${OBJ} ${LIBFT}
			${CC} ${CFLAGS} ${OBJ} ${LIBFT} -o ${NAME}

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIBFT}:
			${MAKE} -C ${LIBFT_PATH}

clean:
			${MAKE} clean -C ${LIBFT_PATH}
			${RM} ${OBJ}

fclean:		clean
			${MAKE} fclean -C ${LIBFT_PATH}
			${RM} ${NAME}

re :		fclean all

.PHONY:		all clean fclean re makemlx
