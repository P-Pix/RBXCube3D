####
### @file Makefile
### @author Guillaume LEMONNIER
### @brief 
### @version 0.1
### @date 2021-06-20
### 
### @copyright Copyright (c) 2021
### 
####

OBJ		= 	$(SRC:.cpp = .o)

MODULE	=	

SRC		=	main.cpp\

NAME	= 	RubixCube.o

val:
	@(valgrind g++ -o $(NAME) $(SRC) $(MODULE))

cpp:
	@(g++ -o $(NAME) $(SRC) $(MODULE))

exe:
	@(./$(NAME))