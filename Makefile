SRC		= 	main.cpp\

OBJ		= 	$(SRC:.cpp = .o)

MODULE	=	

DATA	= 	data/Window/Window.cpp\

NAME	= 	RubixCube

val:
	@(valgrind g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE))
	@(./$(NAME))

cpp:
	@(g++ -o $(NAME) $(OBJ) $(DATA) $(MODULE))
	@(./$(NAME))