CC=gcc

OBJS=s1faces.o facealpmaxsols.o facealpminsols.o  facebetmaxsols.o facebetminsols.o facegmmaxsols.o facegmminsols.o
all: out
	@echo "all"
out: $(OBJS)	
	$(CC) -pg -Wall -I/usr/include -L/usr/local/lib -o out $(OBJS) -lgsl -lgslcblas -lm -O2

s1faces.o: s1faces.c
	$(CC) -pg -c s1faces.c -lm

facealpmaxsols.o: facealpmaxsols.c
	$(CC) -pg -c facealpmaxsols.c -lm

facealpminsols.o: facealpminsols.c
	$(CC) -pg -c facealpminsols.c -lm

facebetmaxsols.o: facebetmaxsols.c
	$(CC) -pg -c facebetmaxsols.c -lm

facebetminsols.o: facebetminsols.c
	$(CC) -pg -c facebetminsols.c -lm

facegmmaxsols.o: facegmmaxsols.c
	$(CC) -pg -c facegmmaxsols.c -lm

facegmminsols.o: facegmminsols.c
	$(CC) -pg -c facegmminsols.c -lm


clean:
	rm -f $(OBJS)		
