#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to Aarav OS Version Preprototype Alpha 0.1.1!");
    print_str(" The Aarav OS Team hopes you like it!");
}
