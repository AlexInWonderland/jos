// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
//           Made for JamesM's tutorials <www.jamesmolloy.co.uk>

#include "monitor.h"

int main(struct multiboot *mboot_ptr)
{
    // Initialise the screen (by clearing it)
    init_descriptor_tables();
    monitor_clear();
    // Write out a sample string
   // for(int i=0;i<26;i++)
     monitor_write("Hello, world!\n");
     asm volatile ("int $0x3");
 //   asm volatile ("int $0x4");
 
    return 0;
}
