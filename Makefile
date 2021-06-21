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

MODULE	=	-lglfw\
			-lGL\
			-lX11\
			-lpthread\
			-lXrandr\
			-lXi\
			-ldl\

SRC		=	main.cpp\
			\
			src/Window/Accessor.cpp\
			src/Window/Constructor.cpp\
			src/Window/Control.cpp\
			src/Window/Draw.cpp\
			\
			src/Triangle/Accessor.cpp\
			src/Triangle/Constructor.cpp\
			src/Triangle/Position.cpp\


NAME	= 	RubixCube.o

val:
	@(valgrind g++ -o $(NAME) $(SRC) $(MODULE))

cpp:
	@(g++ -o $(NAME) $(SRC) $(MODULE))

exe:
	@(./$(NAME))