lectures := $(shell find -type d -name 'lecture-*')

.PHONY = clean

all: $(lectures:%=%/main.pdf)

$(lectures:%=%/main.pdf): $(lectures:%=%/main.tex)
	@echo "building $@"
	cd $(dir $@) && latexmk

clean:
	rm $(lectures:%=%/main.pdf)
