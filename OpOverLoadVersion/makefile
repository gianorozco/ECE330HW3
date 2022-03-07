objects = HRC_Ov_m.o HRC_Ov_fnc.o

edit: $(objects)
	g++ -o edit $(objects)
HRC_Ov_m.o : HRC_Ov_m.cpp HRC_Ov_lib.h
	g++ -c HRC_Ov_m.cpp
HRC_Ov_fnc.o: HRC_Ov_fnc.cpp HRC_Ov_lib.h
	g++ -c HRC_Ov_fnc.cpp
clean:
	rm edit $(objects)
