TARGET = fixrom
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall

.PHONY: default all clean create

default: $(TARGET)
all: default

FILES = $(patsubst %.bin, %.fnt.txt, $(wildcard ../*.bin))
OBJS = $(patsubst %.c, %.o, $(wildcard *.c))
HDRS = $(wildcard *.h)

create: $(TARGET) $(FILES)

%.fnt.txt: %.bin $(TARGET)
	./$(TARGET) $< $(notdir $(patsubst %.bin,%,$<)) > $(notdir $@)

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJS)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -Wall $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
	-rm -f *.fnt.txt
	-rm -f *.bin
