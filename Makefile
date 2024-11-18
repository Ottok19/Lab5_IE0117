Lab5: main.o double_list.o
	gcc -o Lab5 main.o double_list.o

%.o: %.c
	gcc -Wall -c $<

clean:
	rm -f double_list.o main.o Lab5
