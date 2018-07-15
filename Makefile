#Add to the objects if necessary
#main.o need to be added?
objects=obj/compiler.o \
				obj/executor.o \

obj/%.o: src/%.cpp
	mkdir -p $(@D)
	g++ -w -Iinclude -o $@ -c $<

FAST: $(objects)
	g++ -I$(objects) -o FAST

clear:
	make clean
	clear

do:
	make clear
	make FAST

.PHONY: clean
clean:
	rm -rf obj FAST


commit:
	git add .
	git commit -m "$(m)"
	git push

sort_conflicts:
	git stash
	git pull

sort_commit:
	make sort_conflicts
	make commit m="$(m)"
