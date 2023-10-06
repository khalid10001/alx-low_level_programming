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
		printf("%2.2x", head.e_ident[x]);
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
	
	switch (head.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", head.e_ident[EI_CLASS]);
	}
}

/**
 * print_data - a function that prints a elf data
 * @head: elf head
 */
void print_data(Elf64_Ehdr head)
{
	printf("  Data:                              ");

	switch (head.e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", head.e_ident[EI_CLASS]);
	}
}

/**
 * print_version - a function that prints elf version
 * @head: elf head
 */
void print_version(Elf64_Ehdr head)
{
	printf("  Version:                           %d",
	       head.e_ident[EI_VERSION]);

	switch (head.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
	break;
	case EV_NONE:
		printf("%s", "");
	break;
	default:
		printf("\n");
	break;
	}
}

/**
 * print_osabi - a function that prints elf osabi
 * @head: elf head
 */
void print_osabi(Elf64_Ehdr head)
{
	printf("  OS/ABI:                            ");

	switch (head.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	default:
		printf("<unknown: %x>\n", head.e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - a function that print abiversion elf
 * @head: elf head
 */
void print_abi(Elf64_Ehdr head)
{
	printf("  ABI Version:                       %d\n",
			head.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - a function that prints elf type
 * @head: elf head
 */
void print_type(Elf64_Ehdr head)
{
	char *ptr = (char *)&head.e_type;
	int x = 0;

	printf("  Type:                              ");
	if (head.e_ident[EI_DATA] == ELFDATA2MSB)
		x = 1;
	switch (ptr[x])
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[x]);
	}
}

/**
 * print_entry - a function that print elf entry
 * @head: elf head
 */
void print_entry(Elf64_Ehdr head)
{
	int l = 0, x = 0;
	unsigned char *ptr = (unsigned char *)&head.e_entry;

		printf("  Entry point address:               0x");
	if (head.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		x = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (ptr[x] == 0)
		{
			x++;
		}
		printf("%x", ptr[x--]);
		while (x >= 0)
		{
			printf("%02x", ptr[x]);
			x--;
		}
		printf("\n");
	}
	else
	{
		x = 0;
		l = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (ptr[x] == 0)
		{
			x++;
		}
			printf("%x", ptr[x--]);
		while (x <= l)
		{
			printf("%02x", ptr[x]);
			x++;
		}
		printf("\n");
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
	if (close(f) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", f), exit(98);
	return (EXIT_SUCCESS);
}
