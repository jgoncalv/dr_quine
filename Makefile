COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

COLLEEN_SRC = Colleen.c
GRACE_SRC = Grace.c
SULLY_SRC = Sully.c

CC = clang -Wall -Werror -Wextra


all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN):
	$(CC) $(COLLEEN_SRC) -o $(COLLEEN)

$(GRACE):
	$(CC) $(GRACE_SRC) -o $(GRACE)

$(SULLY):
	$(CC) $(SULLY_SRC) -o $(SULLY)

clean:
	rm $(COLLEEN) $(GRACE) $(SULLY)

fclean: clean

re: fclean all

.PHONY:	fclean clean re
