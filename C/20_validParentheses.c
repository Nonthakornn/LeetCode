#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPair(char left, char right) {
    return (left == '(' && right == ')') ||
           (left == '{' && right == '}') ||
           (left == '[' && right == ']');
}

int ft_strlen(char *str) {
    int i = 0;
    while (str[i])
        i++;
    return i;
}

bool isValid(char *s) {
    int len = ft_strlen(s);
    if (len % 2 != 0)
        return false;

    char *stack = malloc(sizeof(char) * len);
    if (!stack)
        return false; // Check if malloc failed

    int top = -1; // Stack index
    int i = 0; // Loop index

    while (i < len) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i]; // Push to stack
        } else {
            if (top == -1 || !checkPair(stack[top--], s[i])) {
                free(stack); // Clean up
                return false; // Invalid or unbalanced
            }
        }
        i++; // Increment the loop index
    }

    bool result = (top == -1); // Stack should be empty
    free(stack); // Free allocated memory
    return result;
}

/*
For loop
bool isValid(char *s) {
    int len = ft_strlen(s);
    if (len % 2 != 0)
        return false;

    char *stack = malloc(sizeof(char) * len);
    if (!stack)
        return false; // Check if malloc failed

    int top = -1; // Stack index

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i]; // Push to stack
        } else {
            if (top == -1 || !checkPair(stack[top--], s[i])) {
                free(stack); // Clean up
                return false; // Invalid or unbalanced
            }
        }
    }

    bool result = (top == -1); // Stack should be empty
    free(stack); // Free allocated memory
    return result;
}
*/

int main() {
    char *input = "{[()]}";
    if (isValid(input)) {
        printf("OK\n");
    } else {
        printf("KO\n");
    }
    return 0;
}
