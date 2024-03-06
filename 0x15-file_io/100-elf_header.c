/*
 * File: 100-elf_header.c
 * Auth: OGERO OTIENO (o)*2
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void display_error(const char *message);
void print_elf_header(Elf64_Ehdr *header);
/**
 * display_error - Display error message and exit with status code 98.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');
    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           "Unknown data encoding");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
           header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
           header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
           "<unknown>");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n",
           header->e_type == ET_EXEC ? "EXEC (Executable file)" :
           header->e_type == ET_DYN ? "DYN (Shared object file)" :
           "Unknown type");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		display_error("Error: Unable to open file");

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		display_error("Error: Unable to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
		display_error("Error: Not an ELF file");

	print_elf_header(&header);

	close(fd);
	return 0;
}
