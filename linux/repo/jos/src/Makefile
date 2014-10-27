# Makefile for JamesM's kernel tutorials.
# The C and C++ rules are already setup by default.
# The only one that needs changing is the assembler 
# rule, as we use nasm instead of GNU as.

SOURCES=boot.o main.o memory.o monitor.o common.o descriptor_tables.o isr.o gdt.o interrupt.o

CFLAGS=-std=gnu99 -ffreestanding -O2 -Wall -Wextra -Iheaders
LDFLAGS=-T link.ld
ASFLAGS=-felf

all: $(SOURCES) link 

clean:
	-rm *.o kernel
.s.o:
	nasm $(ASFLAGS) $< 
.c.o: 
	$(HOME)/opt/cross/bin/i686-elf-gcc -c $(CFLAGS) $< -o $@

link:
	$(HOME)/opt/cross/bin/i686-elf-gcc $(LDFLAGS) -I. -o kernel -ffreestanding -O2 -nostdlib $(SOURCES) -lgcc
