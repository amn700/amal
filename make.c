#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define NAME "ft_split"
#define PROTOTYPE "char **ft_split(char const *s, char c)"

int	main(void)
{
	FILE	*new;
	FILE	*new1;

	new = fopen(NAME ".c", "w");
	if (!new)
		return (1);
	fprintf(new, "#include \"libft.h\"\n\n");
	fprintf(new, PROTOTYPE "\n{\n\t\n}\n");
	fclose(new);
	new1 = fopen("libft.h", "a");
	if (!new)
		return (1);
	fprintf(new1, PROTOTYPE ";\n");
	fclose(new1);
}
