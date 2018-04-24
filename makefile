OBJ = main.o drawing.o triangle.o circle.o rectangle.o square.o hline.o ilines.o 
APPNAME = drawing.a 
TAR = final.tar 
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lm
%.o : %.c 
	gcc -c -o $@ $< 
clean : 
	rm $(OBJ) $(APPNAME) 
archive : 
	tar cf $(TAR) *
