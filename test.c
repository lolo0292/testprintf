// int main(void)
// {
//     // Test character
//     ft_printf("Character test: %c\n", '\0');
//     printf("Character test: %c\n", '\0');

//     // Test string
//     ft_printf("String test: %s\n", "");
// 	printf("String test: %s\n", "");

// // Test pointer2.0
// int *x = NULL;
// printf( "test: %i\n", ft_printf("Pointer test: %p\n", NULL));
// printf( "test: %i\n", printf("Pointer test: %p\n", NULL));


//     // Test pointer
//     int x = 42;
//     ft_printf("Pointer test: %p\n", &x);
// 	printf("Pointer test: %p\n", &x);

//     // Test integer (decimal)
//     ft_printf("Integer test: %d\n", 12345);
//     printf("Integer test: %d\n", 12345);

//     // Test integer (signed)
//     ft_printf("Signed integer test: %i\n", -6789);
//     printf("Signed integer test: %i\n", -6789);

//     // Test unsigned integer
//     ft_printf("Unsigned integer test: %u\n", 3000000000u);
//     printf("Unsigned integer test: %u\n", 3000000000u);

//     // Test hexadecimal (lowercase)
//     ft_printf("Hexadecimal test (lowercase): %x\n", 255);
//     printf("Hexadecimal test (lowercase): %x\n", 255);

//     // Test hexadecimal (uppercase)
//     ft_printf("Hexadecimal test (uppercase): %X\n", 255);
//     printf("Hexadecimal test (uppercase): %X\n", 255);

//     // Test mixing all formats
//     ft_printf("Mix test: %c, %s, %p, %d, %i, %u, %x, %X\n",
//               'Z', "42", &x, 42, -42, 42u, 42, 42);
//     printf("Mix test: %c, %s, %p, %d, %i, %u, %x, %X\n",
//               'Z', "42", &x, 42, -42, 42u, 42, 42);
//     return 0;
// }