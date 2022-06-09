sources = main.c common.c module.c flecs.c

all : broken fixed

broken : ${sources}
	cc -o broken ${sources}

fixed : ${sources}
	cc -DFIXED -o fixed ${sources}

clean:
	rm broken fixed