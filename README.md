# PRINTF PROJECT

![Alt printf](https://www.codesdope.com/staticroot/images/gifs/main_gif.gif)

The printf is a family of functions in the C programming language are a set of functions that take a format string as input among a variable sized list of other values and produce as output a string that corresponds to the format specifier and given input values.

## Compilation

All files must be compiled with [gcc](https://en.wikipedia.org/wiki/GNU_Compiler_Collection),using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

```bash
gcc -Wall -Werror -Wextra - pedantic -std=gnu89 *.c
```

## Usage

```c
#include <stdio.h>
#include "main.h"

#int main(void)
{
	int n;

	n = 10;

	_printf("%d", n);

	return (0);
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License

[MIT](https://choosealicense.com/licenses/mit/)
