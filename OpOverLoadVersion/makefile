objects = HRC_Ov_m.o HRC_Ov_fnc.o

result: $(objects)
	g++ -o result $(objects)
HRC_Ov_m.o : HRC_Ov_m.cpp HRC_Ov_lib.h
	g++ -c HRC_Ov_m.cpp
HRC_Ov_fnc.o: HRC_Ov_fnc.cpp HRC_Ov_lib.h
	g++ -c HRC_Ov_fnc.cpp
clean:
	rm result $(objects)
