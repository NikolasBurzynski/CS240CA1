# Specifiy the target
all:	main

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
main:	Song.o main.o Library.o
	g++ Song.o main.o Library.o -o main.exe

# Specify how the object files should be created from source files
Song.o:	Song.cpp 
	g++ -c Song.cpp

Library.o:	Library.cpp
	g++ -c Library.cpp

main.o: main.cpp 
	g++ -c main.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o *.exe