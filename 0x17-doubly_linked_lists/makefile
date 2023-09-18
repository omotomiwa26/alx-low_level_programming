COMPILE = -Wall -Wextra -Werror -pedantic -std=gnu89 -g

MEMORY_LEAK = -s --leak-check=full --show-leak-kinds=all --track-origins=yes 

betty:
	betty lists.h 

run:
	gcc $(COMPILE) 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o delete_dnodeint

leak:
	valgrind $(MEMORY_LEAK) ./free_dlistint