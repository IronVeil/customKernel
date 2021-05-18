#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("CommunismOS\n");
    print_str("\nCommunism Pog\n");
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("Capitalism cringe\n");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_GREEN);
    print_str("\nMade by a lonely 15 year old :)\n");
}