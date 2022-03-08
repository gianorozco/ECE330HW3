objects = HRCalc_m.o HRCalc_fnc.o

result: $(objects)
	g++ -o result $(objects)
HRCalc_m.o : HRCalc_m.cpp HRCalc_lib.h
	g++ -c HRCalc_m.cpp
HRCalc_fnc.o: HRCalc_fnc.cpp HRCalc_lib.h
	g++ -c HRCalc_fnc.cpp
clean:
	rm result $(objects)
