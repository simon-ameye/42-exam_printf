gcc -Wall -Wextra -Werror ft_printf.c main.c -o ft_printf -DF=printf
./ft_printf > re
gcc -Wall -Wextra -Werror ft_printf.c main.c -o ft_printf -DF=ft_printf
./ft_printf > im
diff re im