C=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=my_ngram
all : $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all