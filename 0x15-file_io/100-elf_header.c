#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv)
{
    int fd;
    long unsigned int bytes;
    Elf64_Ehdr ehdr; /* This struct can hold the data from the ELF header */

    /* Check if filename is provided */
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <elf-file>\n", argv[0]);
        return 1;
    }

    /* Open the file */
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        fprintf(stderr, "Error: Failed to open file %s\n", argv[1]);
        return 1;
    }

    /* Read the ELF header */
    bytes = read(fd, &ehdr, sizeof(ehdr));
    if (bytes < sizeof(ehdr))
    {
        fprintf(stderr, "Error: Failed to read ELF header from file %s\n", argv[1]);
        return 1;
    }

    /* Now you can access the fields of the ELF header */
    printf("Entry point: %lx\n", ehdr.e_entry);
    printf("Machine (architecture): %d\n", ehdr.e_machine);

    close(fd);
    return 0;
}
