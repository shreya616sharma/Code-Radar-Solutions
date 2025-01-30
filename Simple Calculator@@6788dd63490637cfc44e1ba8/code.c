int main() {
    int a, b;
    char c;

    printf("Enter two integers: "); // Added a prompt for input
    scanf("%d %d", &a, &b);

    printf("Enter the operator (+, -, *, /): "); // Added a prompt for input
    scanf(" %c", &c); // Added a space before %c to consume any leftover newline

    if (c == '+') {
        printf("%d\n", a + b); // Corrected: == for comparison, %d for format specifier, \n for newline
    } else if (c == '-') {
        printf("%d\n", a - b); // Corrected
    } else if (c == '*') {
        printf("%d\n", a * b); // Corrected
    } else if (c == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", a / b); // Corrected
        }
    } else {
        printf("Invalid operator\n"); // Added a check for invalid operators
    }

    return 0;
}