#
all:
	blechc blink.blc
	cp blech/blink.* .
	sed -i "s|blech/blink.h|blink.h|g" blink.c
