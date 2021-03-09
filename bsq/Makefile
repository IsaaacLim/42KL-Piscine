#define the C compiler to use
CC = gcc

#define any compile-time flags
CFLAGS = -Wall -Wextra -Werror

#define the C header files
INCLUDES = ft.h

#define the C source files
SRC = convert_map.c ft_passfile.c ft_solve.c ft_utilities.c get_map_details.c read_map.c validate_map.c

#name of the executable file
MAIN = bsq

#all commands follow this structure
#target: prerequisites
#<TAB> recipe

#create an output called from the MAIN variable
start: $(SRC)
	@rm -rf input.txt | $(CC) $(CFLAGS) $(SRC) main.c -o $(MAIN)

#if you type 'make delete' you will remove the output created
delete: 
	rm $(MAIN)
