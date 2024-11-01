.PHONY: all compile test clean

TESTS:=triangle steps.sh xmark-bitmap.py xmark-missy.py bitwise-add bitwise-add.py
COMPILE:=triangle bitwise-add
CFLAGS:=-Wall -Os

all: compile test

compile: $(COMPILE)

test: $(TESTS)
	@for i in $+ ; do tput bold;echo "# Running $$i";tput sgr0; ./$$i ; done

triangle: triangle-obfuscated.c
	$(CC) $(CFLAGS) -o $@ $<

bitwise-add: bitwise-add.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	$(RM) -fv $(COMPILE)
