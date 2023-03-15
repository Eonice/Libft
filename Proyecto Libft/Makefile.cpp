NAME = libft.a
CC = gcc
CFLAGS= -Wall -Werror -Wextra
SRC = //Los archivos a compilar y juntar.

OBJ = $(SRC: .c = .o)

$(NAME): $(OBJ)
