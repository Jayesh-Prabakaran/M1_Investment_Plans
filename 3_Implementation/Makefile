#Targetname : Dependent target names
#<TAB>command

Build:
	gcc Investment_Returns.c Test_Investment_Returns.c -lm ../unity/unity.c -I../unity

run:
	./a.out

analyze:
	test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./test

doc: Doxyfile
	doxygen ./Doxyfile