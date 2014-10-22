# Makefile for JamesM's kernel tutorials.
# The C and C++ rules are already setup by default.
# The only one that needs changing is the assembler 
# rule, as we use nasm instead of GNU as.

SOURCES=boot.o main.o monitor.o common.o

CFLAGS=-std=gnu99 -ffreestanding -O2 -Wall -Wextra -Iheaders
LDFLAGS=-T link.ld
ASFLAGS=

all: $(SOURCES) link 

clean:
	-rm *.o kernel
.s.o:
	$(HOME)/opt/cross/bin/i686-elf-as $(ASFLAGS) $< -o $@
.c.o: 
	$(HOME)/opt/cross/bin/i686-elf-gcc -c $(CFLAGS) $< -o $@

link:
	$(HOME)/opt/cross/bin/i686-elf-gcc $(LDFLAGS) -I. -o kernel -ffreestanding -O2 -nostdlib $(SOURCES) -lgcc
