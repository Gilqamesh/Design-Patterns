name = duckApp
compile_flags = -Wall -Wextra -Werror -std=c++98
link_flags =
compiler = clang++
source_files = $(foreach source_file,$(wildcard $(source_directory)/*.cpp),$(notdir $(source_file)))
header_directory = headers
source_directory = sources
object_directory = objects

$(name): $(foreach file,$(source_files:.cpp=.o),$(object_directory)/$(file))
	$(compiler) $(link_flags) -o $@ $^

# main.cpp
$(object_directory)/main.o: $(source_directory)/main.cpp $(wildcard $(header_directory)/*.hpp)
	cd $(object_directory) && $(compiler) $(compile_flags) -I../$(header_directory) -c ../$<

# for .cpp files that has their own .hpp
$(object_directory)/%.o: $(source_directory)/%.cpp $(header_directory)/%.hpp
	cd $(object_directory) && $(compiler) $(compile_flags) -I../$(header_directory) -c ../$<

.PHONY: all clean re fclean bonus
all:
	make $(name)
clean:
	rm -f $(object_directory)/*.o
fclean: clean
	rm -f $(name)
re: fclean
	make $(name)
