#include "main.h"
#include <elf.h>

/**
 * print_magic - a function that print elf magic
 * @head: elf head
 * Return: 0.
 */
void print_magic(Elf64_Ehdr head)
{
	int x = 0;

	printf("  Magic:   ");
		while (x < EI_NIDENT)
	{
		printf("%02x", head.e_ident[x]);
		if (x == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		x++;
	}
}

/**
 * print_class - a function that print elf class
 * @head: elf head
 * Return: 0.
 */
void print_class(Elf64_Ehdr head)
{
	printf("  Class:                             ");
	if (head.e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (head.e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (head.e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
}

/**
 * main - a program that displays the information contained in the ELF
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int f;
	ssize_t b;
	Elf64_Ehdr head;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	}
	b = read(f, &head, sizeof(Elf64_Ehdr));
	if (b < 0 || b != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	}
	if (head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' &&
			head.e_ident[2] == 'L' && head.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: No file %s\n", argv[1]), exit(98);
	}
	print_magic(head);
	print_class(head);
	print_data(head);
	print_version(head);
	print_osabi(head);
	print_abi(head);
	print_type(head);
	print_entry(head);
	if (close(f) != NULL)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", f), exit(98);
	return (EXIT_SUCCESS);
}
