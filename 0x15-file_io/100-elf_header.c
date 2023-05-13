#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry program
 * @argc: the number of argument
 * @argv: args
 * Return: Always 0
 */
int main (int argc, char **argv)
{
	char *input = (char *)argv[1];
	char *cmmd;
	off_t file_size;
	char buffer[] = " | awk 'NR==1 || NR==2 || NR==3 || NR==4 || NR==5 || NR==6 || NR==7 || NR==8 || NR==10'";
	int tmp_fd, fdr;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename\n");
		return (0);
	}

	tmp_fd = open("temp", O_WRONLY | O_CREAT | O_APPEND, 0666);
	if (tmp_fd == -1)
		return (1);
	write(tmp_fd, "readelf -h ", 11);
	write(tmp_fd, input, sizeof(input));
	write(tmp_fd, buffer, sizeof(buffer));
	close(tmp_fd);

	tmp_fd = open("temp", O_RDONLY);
	if (tmp_fd == -1)
		return (1);

	file_size = lseek(tmp_fd, 0, SEEK_SET);

	cmmd = malloc(file_size + 1);
	if (cmmd == NULL)
	{
		close(tmp_fd);
		return (1);
	}
	fdr = read(tmp_fd, cmmd, file_size);
	if (fdr == -1)
	{
		close(tmp_fd);
		free(cmmd);
	}
	cmmd[fdr] = '\0';
	close(tmp_fd);
	system(cmmd);
	free(cmmd);
	system("rm temp");
	return (0);
}
