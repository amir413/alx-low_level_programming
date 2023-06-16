#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
	int stderr_fd = 2;
	char message[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	size_t len = sizeof(message) - 1;

	if (write(stderr_fd, message, len) != (ssize_t)len)
	{
		_exit(1);
	}

	_exit(1);
}
