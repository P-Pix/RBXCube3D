SRC = 	main.cpp\

OBJ = 	$(SRC:.cpp = .o)

FLAGS =  

DATA = 	data/Window.cpp\

NAME = 	main

val:
	@(valgrind g++ -o $(NAME) $(OBJ) $(DATA) $(FLAGS)) > /dev/null

cpp:
	@(g++ -o $(NAME) $(OBJ) $(DATA) $(FLAGS)) > /dev/null