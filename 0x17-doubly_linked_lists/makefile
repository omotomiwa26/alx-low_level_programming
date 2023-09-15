COMPILE = -Wall -Wextra -Werror -pedantic -std=gnu89 -g

MEMORY_LEAK = -s --leak-check=full --show-leak-kinds=all --track-origins=yes 

betty:
	betty lists.h 

run:
	gcc $(COMPILE)  

leak:
	valgrind $(MEMORY_LEAK) 