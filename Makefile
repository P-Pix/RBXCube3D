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
			-lvulkan\
			-lXxf86vm\

SRC		=	src/main.cpp\
			\
			src/Rubik/Accessor.cpp\
			src/Rubik/Action.cpp\
			src/Rubik/AI.cpp\
			src/Rubik/Constructor.cpp\
			\
			src/Window/Accessor.cpp\
			src/Window/Constructor.cpp\
			src/Window/Control.cpp\
			src/Window/Draw.cpp\
			\
			src/Triangle/Constructor.cpp\

NAME	= 	RubikCube.obj

VERSION	=	-std=c++2a\

val:
	@(valgrind g++ -o $(NAME) $(SRC) $(MODULE) $(VERSION))

cpp:
	@(g++ -o $(NAME) $(SRC) $(MODULE) $(VERSION))

run:
	@(./$(NAME))