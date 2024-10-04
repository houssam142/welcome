#include <unistd.h>
void print_memory(const void *addr, size_t size)
{
	const unsigned char *byte_ptr = (const unsigned char *)addr;
	size_t i = 0;
	while (i < size)
	{
		unsigned char byte = byte_ptr[i];
		char hex[2];
		hex[0] = (byte >> 4) + ((byte >> 4) < 10 ? '0' : 'a' - 10);
		hex[1] = (byte & 0x0F) + ((byte & 0x0F) < 10 ? '0' : 'a' - 10);
		write(1, hex, 2);
	if ((i + 1) % 2 == 0 && (i + 1) < size)
	{
		write(1, " ", 1);
        }
	i++;
    }
    write(1, "\n", 1);
}

int main() {
    int tab[] = {0, 0, 17, 0, 96, 0, 255, 0};
    print_memory(tab, sizeof(tab)); 

    return 0;
}

