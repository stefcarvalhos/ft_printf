# ft_printf

**ft_printf** is a recreation of the `printf` function from the standard C library. This 42 School project challenges you to implement a function that replicates printf's behavior, including variadic arguments, output formatting, and multiple conversion specifiers. The goal is to deepen knowledge about variadic functions, string parsing, and output formatting.

## 📋 Features

### Implemented Conversions

| | Description |
|---------------|----------------|
| **`%c`** | Prints a single character |
| **`%s`** | Prints a string |
| **`%p`** | Prints pointer address (hex) |
| **`%d`** | Prints decimal number (base 10) |
| **`%i`** | Prints integer (base 10) |
| **`%u`** | Prints unsigned decimal (base 10) |
| **`%x`** | Prints lowercase hexadecimal |
| **`%X`** | Prints uppercase hexadecimal |
| **`%%`** | Prints percent symbol |

- ✅ Variadic argument management
- ✅ Format string parsing
- ✅ Numeric base conversion
- ✅ Pointer handling
- ✅ Returns number of characters printed
- ✅ Special case handling (NULL, 0, etc.)

## 🚀 How to Use

### 1. Clone the repository:
```bash
git clone https://github.com/stefcarvalhos/ft_printf.git
cd ft_printf
```

 2. Compile the library:
```bash
make
```
---

## 🎯 Concepts Learned

- **Variadic functions**
- **String parsing:** Format interpretation
- **Base conversions:** Decimal, hexadecimal
- **Pointer manipulation:** Memory addresses
- **Write system call:** Formatted output
- **Edge cases:** Error handling
- **Modularization:** Code organization
