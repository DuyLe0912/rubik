CC  	= gcc
CCLIBS	= -lGL -lGLU -lglut
CCFLAGS	= -Wall -Wextra
PROGRAM	= Rubik
OBJ 	= 		 \
	main.o  	 \
	callbacks.o	 \
	rubik_create.o  	 \
	matrices.o	 \
	animation.o	 \
	program_initialize.o  	 \
	moveslist.o		 \
	randomize.o  \
	textures.o
VPATH 	= src


%.o: %.c
	$(CC) -c -o $@ $< $(CCFLAGS)

$(PROGRAM): $(OBJ)
	$(CC) -o $@ $^ $(CCLIBS) $(CCFLAGS)


.PHONY: clean

clean:
	rm -f src/*.swp *.swp *~ src/*~ *.o
