build: procalc.c
	gcc -o procalc procalc.c
clean: 
	rm procalc
install:
	cp procalc /bin
uninstall:
	rm /bin/procalc
