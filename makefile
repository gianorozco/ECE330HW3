objects = HRCalc_m.o HRCalc_fnc.o

edit: $(objects)
	g++ -o edit $(objects)
HRCalc_m.o : HRCalc_m.cpp HRCalc_lib.h
	g++ -c HRCalc_m.cpp
HRCalc_fnc.o: HRCalc_fnc.cpp HRCalc_lib.h
	g++ -c HRCalc_fnc.cpp
clean:
	rm edit $(objects)
