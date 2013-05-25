CC=g++
CFLAGS=-Wall -O2 -pedantic -ansi -Wextra -pipe -std=c++11

all: ./lambda/lambda ./delegating_constructor/delegating_constructor

./lambda/lambda: ./lambda/lambda.cpp
	$(CC) ./lambda/lambda.cpp $(CFLAGS) -o ./lambda/lambda

./delegating_constructor/delegating_constructor: ./delegating_constructor/delegating_constructor.cpp
	$(CC) ./delegating_constructor/delegating_constructor.cpp $(CFLAGS) -o ./delegating_constructor/delegating_constructor

clean:
	rm -rf  ./lambda/lambda ./delegating_constructor/delegating_constructor
