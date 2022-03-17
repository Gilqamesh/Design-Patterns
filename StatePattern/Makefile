name = gumballApp
compile_flags = -Wall -Wextra -Werror -std=c++11
link_flags =
compiler = clang++
source_files = $(foreach source_file,$(wildcard $(source_directory)/*.cpp),$(notdir $(source_file)))
header_directory = headers
source_directory = sources
object_directory = objects

dependencies: $(name) | $(source_directory) $(header_directory) $(object_directory)

$(name): $(foreach file,$(source_files:.cpp=.o),$(object_directory)/$(file)) | $(source_directory) $(header_directory) $(object_directory)
	$(compiler) $(link_flags) -o $@ $^

# main.cpp
$(object_directory)/main.o: $(source_directory)/main.cpp $(wildcard $(header_directory)/*.hpp) | $(object_directory)
	cd $(object_directory) && $(compiler) $(compile_flags) -I../$(header_directory) -c ../$<

# for .cpp files that has their own .hpp
$(object_directory)/%.o: $(source_directory)/%.cpp $(header_directory)/%.hpp | $(object_directory)
	cd $(object_directory) && $(compiler) $(compile_flags) -I../$(header_directory) -c ../$<

$(object_directory):
	mkdir $@ && cd $@ && touch .gitkeep
$(source_directory):
	mkdir $@
$(header_directory):
	mkdir $@

.PHONY: all clean re fclean bonus
all:
	make $(name)
clean:
	rm -f $(object_directory)/*.o
fclean: clean
	rm -f $(name)
re: fclean
	make $(name)
