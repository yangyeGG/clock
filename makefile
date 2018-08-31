object=main.o delay.o time.o week.o

clock:$(object)
	gcc -o clock $(object)
main.o:
delay.o:
time.o:
week.o:

clean:
	rm *.o
