# ft_printf

## Description
This project is a custom implementation of the standard C library's `printf` function. The `ft_printf` function allows formatting and printing data to the standard output using a variable argument system.

## Theoretical Foundation: Variadic Functions in C

Variadic functions can accept an indefinite number of arguments. In C, these functions are made possible through macros defined in the `<stdarg.h>` library.

### Key Macros

#### 1. `va_list`
This macro defines a special data type that stores the information needed to access each argument in the variable list. It functions as a pointer that traverses the call stack.

```c
va_list args;  // Declaration of a variable argument list
```

#### 2. `va_start(va_list ap, last)`
Initializes the variable argument list `ap` to begin processing arguments. The `last` parameter must be the last fixed (known) parameter before the variable arguments.

```c
va_start(args, format);  // Initialize 'args' to access arguments after 'format'
```

#### 3. `va_arg(va_list ap, type)`
Retrieves the next argument from the list `ap` and converts it to the specified `type`. After calling this macro, the internal pointer automatically advances to the next argument.

```c
int value = va_arg(args, int);  // Extract the next argument as an integer
```

#### 4. `va_end(va_list ap)`
Cleans up the `va_list` object and releases used resources. It's essential to call this macro after processing all arguments.

```c
va_end(args);  // Finalize variable argument processing
```

### Internal Mechanism

When a variadic function like `ft_printf` is called:

1. Arguments are placed sequentially on the call stack.
2. The function knows the location of the first variable argument through `va_start`.
3. Each call to `va_arg` internally shifts the pointer according to the size of the requested type.
4. The programmer must know the correct type of each argument to extract it properly.

### Limitations and Considerations

- The compiler cannot verify if the number and type of arguments are correct.
- It's the programmer's responsibility to ensure types match the format specifiers.
- Incorrect usage can lead to undefined behavior and security vulnerabilities.

## Implementation

Our `ft_printf` implementation supports the following format specifiers:

- `%c`: Characters
- `%s`: Strings
- `%p`: Pointers
- `%d` and `%i`: Signed integers
- `%u`: Unsigned integers
- `%x` and `%X`: Hexadecimal representation (lowercase and uppercase)

The function parses the format string character by character, processing specifiers and extracting corresponding arguments as needed.

## Usage

```c
#include "ft_printf.h"

int main(void)
{
    char *str = "Hello";
    int num = 42;
    
    // Usage similar to original printf
    ft_printf("String: %s, Number: %d\n", str, num);

    return(0);
}
