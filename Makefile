SRC		= 	main.cpp\

OBJ		= 	$(SRC:.cpp = .o)

MODULE	=	-logre-root\

DATA	= 	data/Window.cpp\

NAME	= 	main

val:
	@(valgrind g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE))

cpp:
	@(g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE))